#include <stdio.h>
//1�� ���� 
void hanoi(n, from, temp, to)
{
	if(n == 1)
		printf("���� 1�� %c���� %c�� �̵�\n", from, to);
	else
	{
		hanoi(n - 1, from, to, temp);
		printf("���� %d�� %c���� %c�� �̵�\n", n, from, to);
		hanoi(n - 1, temp, from, to);
	}
}

int main()
{
	int n;
	printf("������ ���� : ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
