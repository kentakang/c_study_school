#include <stdio.h>

int main()
{
	int a[17][13];
	int i, j, input, today, date, result = 0;
	
	for(i = 0; i < 17; i++)
	{
		int year = 2001 + i;
		a[i][0] = year;
		for(j = 1; j <= 12; j++)
		{
			switch(j)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					a[i][j] = 31;
					break;
				case 2:
					a[i][j] = 28;
					break;
				default:
					a[i][j] = 30;
					break;
			}
		}
	}
	
	printf("»ç±Ï³¯ : ");
	scanf("%d", &input);
	printf("¿À´Ã ³¯Â¥ : ");
	scanf("%d", &today);
	
	int year, month, day;
	date = today - input;
	day = (date % 10);
	date = date / 10;
	day = day + (date % 10) * 10;
	date = date / 10;
	month = date % 10;
	date = date / 10;
	month = month + date % 10 * 10;
	year = (date % 10) * 10;
	date = date / 10;
	year = year + (date % 10);
	date = date / 10;
	
	for(i = 0; i <= year; i++)
	{
		if(i == year)
			for(j = 1; j <= month; j++)
			{
				result += a[i][j];
			}
		else
			for(j = 1; j <= 12; j++)
			{
				result += a[i][j];
			}
	}
	
	day = (today % 10);
	today = today / 10;
	day = day + (today % 10) * 10;
	today = today / 10;
	month = today % 10;
	today = today / 10;
	month = month + today % 10 * 10;
	year = (today % 10) * 10;
	today = today / 10;
	year = year + (today % 10);
	today = today / 10;
	
	today = 0;
	
	for(i = 0; i < 1; i++)
	{
		for(j = 1; j <= month; j++)
		{
			today += a[i][j];
		}
	}
}
