#include <stdio.h>

int main()
{
	//1�� ���� 
	int a, b, c;
	int i, count = 0;
	printf("���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("��� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &c);
	for(i = a; i < b + 1; i++)
	{
		if(i%c==0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n\n�Է� �� %d ���� %d ������ %d�� ����� %d�� �Դϴ�.", a, b, c, count);
	return 0;
}
