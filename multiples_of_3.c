#include <stdio.h>

int main()
{
	//1�� ���� 
	int i, count = 0;
	for(i = 1; i < 10001; i++)
	{
		if(i % 3 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n\n %d �� �Դϴ�.", count);
}
