#include <stdio.h>
#include <string.h>

int main()
{
	char ch[] = "computer";

	for (int i = 0; i < strlen(ch); i+=2)
		putch(ch[i]);

	return 0;
}