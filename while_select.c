#include <stdio.h>

int main()
{
	//1�� ����
	int i = 0;
	
	while(1)
	{
		printf("====================\n");
		printf("     �ְ� �̳��?   \n");
		printf("| 1. ��𷣵� ���� |\n");
		printf("| 2. ���̷��� ��� |\n");
		printf("| 3. ������� ���� |\n");
		printf("| 4. �������� ��� |\n");
		printf("====================\n");
		printf("     ��ȣ �Է� - >");
		scanf("%d", &i);
		if(i == 1)
		{
			printf("���� ������ Ʈ����ī��");
			break;
		}
		else if(i == 2)
		{
			printf("��� ������ Ʈ����ī��");
			break;
		}
		else if(i == 3)
		{
			printf("������ ������ Ʈ����ī��");
			break;
		}
		else if(i == 4)
		{
			printf("?\n");
		}
		else
		{
			printf("�ٽ� ���\n");
		}
	} 
}
