#include <stdio.h>
#include <string.h>

#define N 50

void fun(char ch[], int m);

int main()
{
	char ch[] = "21234567";
	fun(ch, 5);
	puts(ch);

	return 0;
}

void fun(char ch[], int m)
{
	size_t len = strlen(ch);
	char temp[N] = "";
	if (m > len)
		return;
	for (int i = 0; i < m; ++i) {
		temp[i] = ch[i];
	}
	for (int i = m, j = 0; i < len; ++i, ++j) {
		ch[j] = ch[i];
	}
	for (int i = len - m, j = 0; i < len; ++i, ++j) {
		ch[i] = temp[j];
	}
}