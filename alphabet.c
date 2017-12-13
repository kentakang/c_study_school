#include <stdio.h>

int main()
{
	int alphabet[26] = {0,};
	char str[100];
	int i = 0;
	
	scanf("%s", str);
	while(str[i] != '\0')
	{
		++alphabet[str[i] - 97];
		i++;
	}
	
	for(i = 0; i < 26; i++)
	{
		if(alphabet[i] != 0)
			printf("%cÀÇ °¹¼ö :  %d\n", i + 97, alphabet[i]);
	}
	
	return 0;
}
