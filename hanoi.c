#include <stdio.h>
//1번 강찬 
void hanoi(n, from, temp, to)
{
	if(n == 1)
		printf("원판 1을 %c에서 %c로 이동\n", from, to);
	else
	{
		hanoi(n - 1, from, to, temp);
		printf("원판 %d를 %c에서 %c로 이동\n", n, from, to);
		hanoi(n - 1, temp, from, to);
	}
}

int main()
{
	int n;
	printf("원판의 갯수 : ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
