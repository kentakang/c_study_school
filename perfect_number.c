#include <stdio.h>

int main()
{
	//1�� ����
	int n, i, sum = 0;
	
	scanf("%d", &n);
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum+=i;
		}
	}
	if(sum == n)
	{
		printf("������\n");
	}
	else
	{
		printf("����\n");
	}
}
