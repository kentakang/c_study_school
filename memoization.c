#include <stdio.h>
//1¹ø °­Âù 
int memo[100] = {0,};

int fibo(int n)
{
	if(n < 3)
		return 1;
	else
	{
		if(memo[n] > 0)
			return memo[n];
		memo[n] = fibo(n - 1) + fibo(n - 2);
		return memo[n];
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
