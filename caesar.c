#include <stdio.h>

int main()
{
	int key;
	printf("�ҹ��ڸ� �Է��ϼ��� : ");
	char sEcReT = getchar();
	printf("Ű ���� �Է��ϼ��� : ");
	scanf("%d", &key);
	if(sEcReT + key > 122)
	{
		sEcReT = 96;
	}
	printf("�Է��Ͻ� ���ڸ� ��ȣȭ�� ���ڴ� %c �Դϴ�.", sEcReT - 32 + key);
	
	return 0;
}
