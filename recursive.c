#include <stdio.h>
//1�� ���� 

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
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("%d! = %d", n, fact(n));
}
