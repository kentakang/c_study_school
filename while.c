#include <stdio.h>

int main()
{
	//1�� ���� 
	int i;
	
	while(1)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &i);
		
		if(i == 0)
		{
			break;
		}
		else
		{
			printf("%d ������\n", i);
		}
	}
	
	return 0;
}
