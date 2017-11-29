#include <stdio.h>

char goBoard[19][19];
int i, j, color, row, col;

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
	initialize();
	while(1)
	{
		putchar('>');
		scanf("%d %d %d", &color, &row, &col);
		placeStone(color, row, col);
		if(placeStone(color, row, col) == 0)
			break;
		showBoard();
	}
}
