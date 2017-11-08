#include <stdio.h>

int main()
{
	//1번 강찬
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
			printf("%d권 : %d장\n", money, n / money);
			temp = n / money;
			n = n - money * temp;
		}
		else
		{
			printf("%d권 : 0장\n", money);
		}
	}
}
