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

int main()
{
	int turn = 0, row, col;
	initialize();
	while(1)
	{
		putchar('>');
		scanf("%d %d", &row, &col);
		if(goBoard[row-1][col-1] == '-')
		{
			placeStone(turn, row, col);
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
