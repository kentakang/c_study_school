#include <stdio.h>

int main()
{
	//1�� ����
	int i, j, n;
	printf("�� ���� : ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for(j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
