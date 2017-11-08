#include <stdio.h>

int main()
{
	char word[10], checkPalindrome = 0;
	int i;
	scanf("%s", &word);
	for(i = 0; i < 5; i++)
	{
		if(word[i] != word[10 - i - 1])
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
