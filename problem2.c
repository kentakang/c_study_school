#include <stdio.h>

int main()
{
	//1�� ����
	int n, temp, i, money = 100000;
	scanf("%d", &n);
	for(i = 1; i <= 9; i++)
	{
		if(i % 2 == 0)
			money = money / 5;
		else
			money = money / 2;
		if(n / money >= 1)
		{
			printf("%d�� : %d��\n", money, n / money);
			temp = n / money;
			n = n - money * temp;
		}
		else
		{
			printf("%d�� : 0��\n", money);
		}
	}
}
