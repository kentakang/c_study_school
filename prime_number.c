#include <stdio.h>

int main()
{
	//1�� ���� 
	int a, i, count = 0;
	printf("���ڸ� �Է��ϼ��� : ");
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
		printf("%d�� �Ҽ��Դϴ�.", a);
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴϿ���", a);
	}
	
	return 0;
}
