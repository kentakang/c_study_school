#include <stdio.h>

int main()
{
	//1�� ����
	int i, j, cnt, sum = 0;
	
	for(i = 1; i <= 100; i++)
	{
		cnt = 0;
		for(j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				cnt++;
			}
		}
		if(cnt <= 2)
		{
			printf("%d ", i);
			sum++;
		}
	}
	
	printf("�� %d���� �Ҽ�", sum);
}
