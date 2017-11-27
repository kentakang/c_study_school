#include <stdio.h>

int main()
{
	// 연산자 우선 순위
	int result = 4 + 3 * 5;
	printf("%d\n", result);
	
	//산술 연산자
	int i = 13, j = 5, temp;
	printf("%d %d %d %d %d\n", i + j, i - j, i * j, i / j, i % j);
	
	//증감 연산자
	temp = ++i; printf("%d %d\n", temp, i); 
	temp = i++; printf("%d %d\n", temp, i); 
	temp = --j; printf("%d %d\n", temp, j); 
	temp = j--; printf("%d %d\n", temp, j); 
	
	//관계 연산자
	i = 13, j = 5;
	printf("%d %d %d %d %d %d\n", i < j, i > j, i >= j, i <= j, i != j, i == j);
	
	//조건 연산자
	result = i < j ? 10 : 100;
	printf("%d\n", result);
	
	return 0; 
}
