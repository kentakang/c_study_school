#include <stdio.h>

int main()
{
	// 논리 연산자는 두개 이상의 값을 비교하여 참이면 1, 거짓이면 0을 나타냄
	
	int i = 13, j = 5, temp;
	printf("%d %d\n", i == 13 && j == 5, i == 13 && j == 4); // AND 연산자는 두개가 모두 참이여야만 참, 하나라도 거짓이면 거짓
	printf("%d %d\n", i == 13 || j == 5, i == 13 || j == 4); // OR 연산자는 두 개중 한개가 참이여도 참
	temp = i;
	printf("%d\n", !temp); // NOT 연산자는 해당 변수의 반대
	temp = 0;
	printf("%d\n", !temp);
	
	// 단락 효과 short circuit
	if(i < 10 && ++j > 3)
	{
		// AND 연산자의 경우 앞의 값이 거짓이면 모두 거짓이기 때문에 앞의 값이 거짓일 경우 뒤의 값을 계산하지 않고 넘어간다.	
	} 
	
	printf("%d %d\n", i, j);
	
	return 0;
}
