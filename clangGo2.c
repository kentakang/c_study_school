#include <stdio.h>

char goBoard[19][19];
int i, j;

void initialize()
{
	for(i = 0; i < 19; i++)
	{
		for(j = 0; j < 19; j++)
		{
			goBoard[i][j] = '-';
		}
	}
}

int placeStone(int color, int row, int col)
{
	if(color == 0)
	{
		goBoard[row-1][col-1] = 'B';
		return 1;
	}
	else if(color == 1)
	{
		goBoard[row-1][col-1] = 'W';
		return 1;
	}
	else
		return 0;
}

void showBoard()
{
	for(i = 0; i < 19; i++)
	{
		for(j = 0; j < 19; j++)
		{
			printf("%c ", goBoard[i][j]);
		}
		printf("\n");
	}
}

int checkOmok(int color, int row, int col)
{
	int i = 0, bCnt = 0, wCnt = 0, maxCount = 0;
	
	for(i = 0; i < 19; i++)
	{
		if(goBoard[row - 1][i] == 'B' || goBoard[i][col - 1] == 'B')
			bCnt++;
		else if(goBoard[i][i] == 'B')
			bCnt++;
		else if(goBoard[row - 1][i] == 'W' || goBoard[i][col - 1] == 'W')
			wCnt++;
		else if(goBoard[i][i] == 'W')
			wCnt++;
		else
		{
			if(color == 0)
			{
				if(bCnt >= maxCount)
					maxCount = bCnt;
				bCnt = 0;
			}
			else if(color == 1)
			{
				if(wCnt >= maxCount);
					maxCount = wCnt;
				wCnt = 0;
			}
			else
				return 0;
		}
	}
	if(maxCount >= 5)
		return 1;
	else
		return 0;
}

int main()
{
	int turn = 0, row, col;
	initialize();
	while(1)
	{
		if(turn == 0)
			printf("흑 > ");
		else
			printf("백 > ");
		scanf("%d %d", &row, &col);
		if(row == 0 || col == 0)
			break; 
		if(goBoard[row-1][col-1] == '-')
		{
			placeStone(turn, row, col);
			if(checkOmok(turn, row, col) == 1)
			{
				if(turn == 0)
				{
					printf("흑인 승\n");
					break;
				}
				else
				{
					printf("백인 승\n");
					break;
				}
			}
			if(placeStone(turn, row, col) == 0)
				break;
			if(turn == 0)
				turn = 1;
			else
				turn = 0;
		}
		else
			printf("이미 돌이 있는 위치입니다.\n");
			
		showBoard();
	}
}
