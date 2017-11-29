#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int computerPlay()
{
	int rand = srand(time(NULL));
	int row = rand % 19 + 1;
	int col = rand % 19 + 1;
	while(1)
	{
		
		if(goBoard[row-1][col-1] == '-')
		{
			placeStone(1, row, col);
			break;
		}
	}
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
		if(row == 0 || col == 0)
			break;
		if(turn == 0)
		{
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
		}
		else if(turn == 1)
		{
			computerPlay();
			turn = 0;
		}
		else
		{
			printf("unexpected error\n");
		}
		
			
		showBoard();
	}
}
