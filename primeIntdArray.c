#include <stdio.h>

int main()
{
	//1¹ø °­Âù
	int i, j, x = 0, y = 0, cnt, sum;
	int a[5][5]; 
	
	for(i = 2; i <= 100; i++)
	{
		cnt = 0;
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
				cnt++;
		}
		if(cnt <= 2)
		{
			a[x][y] = i;
			y++;
		}
		if(y > 4)
		{
			y = 0;
			x++;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
			printf("%2d ", a[i][j]);
		printf("\n");
	}
}
