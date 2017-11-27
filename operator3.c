#include <stdio.h>

int main()
{
	// 시프트 연산자는 지정된 비트 수 만큼 왼쪽 또는 오른쪽으로 이동하는 연산자에용
	
	int i = 13, j = 5;
	printf("%d %d %d %d\n", i << 2, i >> 2, j << 3, j >> 3);
	return 0; 
}
