#include <stdio.h>

int main()
{
	//1번 강찬
	int a[5];
	int i, j, temp, swap = 0;
	
	printf("숫자 5개를 입력해주세요.\n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);	
	} 
	
	for(i = 0; i < 4; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				swap++;
			}
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("스왑 수 : %d\n", swap);
	
	return 0; 
}
