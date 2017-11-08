#include <stdio.h>

int main()
{
	//1번 강찬
	int i, j, cnt = 0;
	int a[4];
	int num, cnt2 = 0, num1, num2;
	
	for(i = 0; i < 10000; i++)
	{
		num = i;
		cnt2 = 0;
		for(j = 0; j < 4; j++)
		{
			a[j] = num % 10;
			num = num / 10;
		}
		for(j = 3; j > 0; j--)
		{
			if(a[j] <= a[j-1])
			{
				cnt2++;
			}
		}
		num1 = a[0] + a[1];
		num2 = a[2] + a[3];
		if(cnt2 >= 3 || num1 > num2)
		{
			printf("%d -> 오름차순\n", i);
			cnt++;
		}
	}
	printf("%d", cnt);
}
