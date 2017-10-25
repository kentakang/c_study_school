#include <stdio.h>

int main()
{
	//1번 강찬 
	int i, sum = 0;
	int a[5];
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		sum+=a[i];
	}
	
	printf("총점은 %d 입니다.", sum);
	return 0;
}
