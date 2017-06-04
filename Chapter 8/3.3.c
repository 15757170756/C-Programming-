#include <stdio.h>
#include <string.h>
#include <assert.h>

int fun(char ch[]);

int main()
{
	//回文
	char ch1[] = "abccba";
	//不是回文
	char ch2[] = "abcde";
	char ch3[] = "";
	int isPalindrome = fun(ch3);
	printf("%d\n", isPalindrome);

	return 0;
}

int fun(char ch[])
{
	int count = 0;
	size_t len = strlen(ch);
	if (len == 0)
		return 0;
	for (size_t i = 0, j = len - 1; i < len / 2; ++i, --j) {
		if (ch[i] == ch[j])
			count++;
	}
	if (count == len / 2)
		return 1;
	else
		return 0;
}
