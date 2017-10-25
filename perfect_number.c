#include <stdio.h>

int main()
{
	//1번 강찬
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
		printf("완전수\n");
	}
	else
	{
		printf("정상쑤\n");
	}
}
