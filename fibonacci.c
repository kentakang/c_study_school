#include <stdio.h>
//1�� ���� 
int fibo(n)
{
	if(n < 3) return 1;
	else return fibo(n-1) + fibo(n-2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
