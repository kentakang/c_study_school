#include <stdio.h>

int main()
{
	// ������ �켱 ����
	int result = 4 + 3 * 5;
	printf("%d\n", result);
	
	//��� ������
	int i = 13, j = 5, temp;
	printf("%d %d %d %d %d\n", i + j, i - j, i * j, i / j, i % j);
	
	//���� ������
	temp = ++i; printf("%d %d\n", temp, i); 
	temp = i++; printf("%d %d\n", temp, i); 
	temp = --j; printf("%d %d\n", temp, j); 
	temp = j--; printf("%d %d\n", temp, j); 
	
	//���� ������
	i = 13, j = 5;
	printf("%d %d %d %d %d %d\n", i < j, i > j, i >= j, i <= j, i != j, i == j);
	
	//���� ������
	result = i < j ? 10 : 100;
	printf("%d\n", result);
	
	return 0; 
}
