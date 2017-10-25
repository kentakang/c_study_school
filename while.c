#include <stdio.h>

int main()
{
	//1번 강찬 
	int i;
	
	while(1)
	{
		printf("숫자를 입력하세영 : ");
		scanf("%d", &i);
		
		if(i == 0)
		{
			break;
		}
		else
		{
			printf("%d 눌렀쪄\n", i);
		}
	}
	
	return 0;
}
