#include <stdio.h>
#include <assert.h>
#include <string.h>

void strcopy(char ch[], int n, int m);

int main()
{
	char ch[] = "123456789abcdefg";
	strcopy(ch, 4, 8);
	return 0;
}

void strcopy(char ch[], int n, int m)
{
	//assert(n > m);
	if (n > m) {
		printf("error, n > m\n");
		return;
	}
	
	int charLength = strlen(ch);
	if (m > charLength) {
		printf("error, m > the string length.\n");
		return;
	}
	for (int i = n - 1; i <= m - 1; ++i) {
		putchar(ch[i]);
	}
}
