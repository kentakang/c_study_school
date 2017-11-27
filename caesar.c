#include <stdio.h>

int main()
{
	int key;
	printf("소문자를 입력하세영 : ");
	char sEcReT = getchar();
	printf("키 값을 입력하세영 : ");
	scanf("%d", &key);
	if(sEcReT + key > 122)
	{
		sEcReT = 96;
	}
	printf("입력하신 문자를 암호화한 문자는 %c 입니다.", sEcReT - 32 + key);
	
	return 0;
}
