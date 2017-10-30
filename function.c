#include <stdio.h>

void haha1()
{
	printf("haha\n");
}

void haha2(int i)
{
	printf("%d haha\n", i);
}

int haha3()
{
	return 74;
}

int haha4(int i)
{
	return i + 100;
}

int main()
{
	haha1();
	haha2(69);
	printf("%d\n", haha3());
	printf("%d", haha4(100));
}
