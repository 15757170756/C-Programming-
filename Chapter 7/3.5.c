#include <stdio.h>
#include <assert.h>

char* Mystrcat(char* dest, const char* src);

int main()
{
	char s0[9] = "abc";
	char s1[4] = "def";
	Mystrcat(s0, s1);
	printf("%s\n", s0);

	return 0;
}

char* Mystrcat(char* dest, const char* src)
{
	char* address = dest;
	assert((dest != NULL) && (src != NULL));

	while (*(dest++) != '\0'); //最后一次判断虽然不成立，但是dest还是++了，所有指向了
								//‘\0'后面一个
	while (*dest++ = *src++); //包括这里也一样
	*dest = '\0';

	return address;
}

这个版本是有错误的。











#include <stdio.h>
#include <assert.h>

char* Mystrcat(char* dest, const char* src);

int main()
{
	char s0[9] = "abc";
	char s1[4] = "def";
	Mystrcat(s0, s1);
	printf("%s\n", s0);

	return 0;
}

char* Mystrcat(char* dest, const char* src)
{
	char* address = dest;
	assert((dest != NULL) && (src != NULL));

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';

	return address;
}