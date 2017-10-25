#include <stdio.h>

int main()
{
	//1번 강찬 
	int i, count = 0;
	for(i = 1; i < 10001; i++)
	{
		if(i % 3 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n\n %d 개 입니다.", count);
}
