#include <stdio.h>

int cnt = 0;

void move(int from, int to)
{
    printf("\n%d에서 %d로 이동", from, to);
    cnt++;
}

void hanoi(int n, int from, int by, int to)
{
    if (n == 1)
        move(from, to);
    else
	{
        hanoi(n - 1, from, to, by);  
        move(from, to);               
        hanoi(n - 1, by, from, to);    
    }
}

void main(void)
{
    int n;
    printf("숫자를 입력하세영 : ");
    scanf("%d", &n);
    hanoi(n, 1, 2, 3);
    printf("\n%d번 이동", cnt);
    return 0;
}

