#include <stdio.h>

int binToHex(int n)
{
	switch (n)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return n;
		case 10:
			return 'A';
		case 11:
			return 'B';
		case 12:
			return 'C';
		case 13:
			return 'D';
		case 14:
			return 'E';
		case 15:
			return 'F';
	}
}

int main()
{
	char a[7], result[1];
	int i, cnt = 1, sum = 0;
	
	scanf("%s", &a);
	for(i = 7; i >= 4; i--)
	{
		if(a[i] == '1')
			sum+=cnt;
		cnt*=2;
	}
	result[0] = binToHex(sum);
	sum = 0;
	cnt = 1;
	for(i = 3; i >= 0; i--)
	{
		if(a[i] == '1')
			sum+=cnt;
		cnt*=2;
	}
	result[1] = binToHex(sum);
	printf("0x%c%c", result[1], result[0]);
	
	return 0;
}
