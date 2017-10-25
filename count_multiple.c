#include <stdio.h>

int main()
{
	//1번 강찬 
	int a, b, c;
	int i, count = 0;
	printf("시작 숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("끄읕 숫자를 입력하세요 : ");
	scanf("%d", &b);
	printf("배수 숫자를 입력하세요 : ");
	scanf("%d", &c);
	for(i = a; i < b + 1; i++)
	{
		if(i%c==0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n\n입력 수 %d 부터 %d 사이의 %d의 배수는 %d개 입니다.", a, b, c, count);
	return 0;
}
