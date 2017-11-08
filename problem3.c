#include <stdio.h>

int main()
{
	char word[100], checkPalindrome = 0;
	int i, cnt = 0;
	scanf("%s", &word);
	while(1)
	{
		if(word[cnt] == NULL)
			break;
		cnt++;
	}
	for(i = 0; i < cnt / 2; i++)
	{
		if(word[i] != word[cnt - i - 1])
		{
			checkPalindrome = 0;
			break;
		}
		checkPalindrome = 1;
	}
	if(checkPalindrome == 1)
		printf("yes");
	else
		printf("no");
}
