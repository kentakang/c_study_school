#include <stdio.h>

int main()
{
	int score;
	char grade;
	
	puts("점수를 입력하세영 (1 ~ 100)");
	putchar('>');
	scanf("%d", &score);
	
	switch(score / 10)
	{
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
	}
	printf("등급은 %c 입니다.", grade);
	
	return 0;
}
