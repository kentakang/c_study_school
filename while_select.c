#include <stdio.h>

int main()
{
	//1번 강찬
	int i = 0;
	
	while(1)
	{
		printf("====================\n");
		printf("     최고 미녀는?   \n");
		printf("| 1. 모모랜드 주이 |\n");
		printf("| 2. 주이랜드 모모 |\n");
		printf("| 3. 모모주이 랜드 |\n");
		printf("| 4. 랜드주이 모모 |\n");
		printf("====================\n");
		printf("     번호 입력 - >");
		scanf("%d", &i);
		if(i == 1)
		{
			printf("망고 톡톡톡 트로피카나");
			break;
		}
		else if(i == 2)
		{
			printf("사과 톡톡톡 트로피카나");
			break;
		}
		else if(i == 3)
		{
			printf("복숭아 톡톡톡 트로피카나");
			break;
		}
		else if(i == 4)
		{
			printf("?\n");
		}
		else
		{
			printf("다시 골라\n");
		}
	} 
}
