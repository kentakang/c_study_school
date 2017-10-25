#include <stdio.h>

int main()
{
	//1번 강찬 
	int a, i, count = 0;
	printf("숫자를 입력하세영 : ");
	scanf("%d", &a);
	for(i = 2; i < a+1; i++)
	{
		if(a%i == 0)
		{
			count++;
		}
	}
	if(count == 1)
	{
		printf("%d는 소수입니다.", a);
	}
	else
	{
		printf("%d는 소수가 아니에용", a);
	}
	
	return 0;
}
