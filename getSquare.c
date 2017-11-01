#include <stdio.h>
//1¹ø °­Âù

int main()
{
	int a[2][2], x, y;
	printf("1¹ø Á¡ÀÇ ÁÂÇ¥ : ");
	scanf("%d %d", &a[0][0], &a[0][1]);
	printf("2¹ø Á¡ÀÇ ÁÂÇ¥ : ");
	scanf("%d %d", &a[1][0], &a[1][1]);
	printf("3¹ø Á¡ÀÇ ÁÂÇ¥ : ");
	scanf("%d %d", &a[2][0], &a[2][1]);
	x = a[0][0]^a[1][0]^a[2][0];
	y = a[0][1]^a[1][1]^a[2][1];
	printf("4¹ø Á¡ÀÇ ÁÂÇ¥ : %d %d", x, y);
} 
