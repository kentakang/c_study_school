#include <stdio.h>

int main()
{
	//1�� ����
	int a[5];
	int i, j, temp, swap = 0;
	
	printf("���� 5���� �Է����ּ���.\n");
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
	printf("���� �� : %d\n", swap);
	
	return 0; 
}
