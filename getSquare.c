#include <stdio.h>
//1�� ����

int main()
{
	int a[2][2], x, y;
	printf("1�� ���� ��ǥ : ");
	scanf("%d %d", &a[0][0], &a[0][1]);
	printf("2�� ���� ��ǥ : ");
	scanf("%d %d", &a[1][0], &a[1][1]);
	printf("3�� ���� ��ǥ : ");
	scanf("%d %d", &a[2][0], &a[2][1]);
	x = a[0][0]^a[1][0]^a[2][0];
	y = a[0][1]^a[1][1]^a[2][1];
	printf("4�� ���� ��ǥ : %d %d", x, y);
} 