#include <stdio.h>

int main()
{
	//1번 강찬
	int i, sum = 0, numMax = 0, numMin = 100;
	int a[9];
	
	for(i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 9; i++)
	{
		if(a[i] < numMin)
		{
			numMin = a[i];
		}
		if(a[i] > numMax)
		{
			numMax = a[i];
		}
		sum = sum + a[i];
	}
	sum = sum - numMax - numMin;
	printf("최대 값은 %d, 최소 값은 %d 입니다.\n", numMax, numMin);
	printf("최대 값과 최소 값을 제외한 총점은 %d점 입니다.", sum);
	
	return 0;
}
