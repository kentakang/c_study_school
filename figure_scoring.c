#include <stdio.h>

int main()
{
	//1�� ����
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
	printf("�ִ� ���� %d, �ּ� ���� %d �Դϴ�.\n", numMax, numMin);
	printf("�ִ� ���� �ּ� ���� ������ ������ %d�� �Դϴ�.", sum);
	
	return 0;
}
