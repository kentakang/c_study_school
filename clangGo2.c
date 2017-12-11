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

int checkOmok(int row, int col)
{
	int i = 0, cnt = 0, maxCount = 0;
	
	for(i = 0; i < 19; i++)
	{
		if(goBoard[row - 1][i] == 'B' || goBoard[row - 1][i] == 'W')
			cnt++;
		else if(goBoard[i][col - 1] == 'B' || goBoard[i][col - 1] == 'W')
			cnt++;
		else if(goBoard[i][i] == 'B' || goBoard[i][i] == 'W')
			cnt++;
		else
		{
			if(cnt >= maxCount)
				maxCount = cnt;
			cnt = 0;
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
			printf("�� > ");
		else
			printf("�� > ");
		scanf("%d %d", &row, &col);
		if(row == 0 || col == 0)
			break; 
		if(goBoard[row-1][col-1] == '-')
		{
			placeStone(turn, row, col);
			if(checkOmok(row, col) == 1)
			{
				if(turn == 0)
				{
					printf("���� ��\n");
					break;
				}
				else
				{
					printf("���� ��\n");
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
			printf("�̹� ���� �ִ� ��ġ�Դϴ�.\n");
			
		showBoard();
	}
}
