#include <stdio.h>
//1번 강찬 

int fact(int n)
{
	if(n > 1)
	{
		return n * fact(n-1);
	}
	return 1;
}

int main()
{
	int n;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &n);
	printf("%d! = %d", n, fact(n));
}
