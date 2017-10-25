#include <stdio.h>

int main()
{
	//1¹ø °­Âù 
	int i, j;
	for(i = 2; i < 10; i++)
	{
		for(j = 1; j < 10; j++)
		{
			printf("%d x %d = %2d\n", i, j, i * j);
		}
		printf("\n");
	}
}
