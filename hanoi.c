#include <stdio.h>

int cnt = 0;

void move(int from, int to)
{
    printf("\n%d���� %d�� �̵�", from, to);
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
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &n);
    hanoi(n, 1, 2, 3);
    printf("\n%d�� �̵�", cnt);
    return 0;
}

