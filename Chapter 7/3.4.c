#include <stdio.h>

int stringLength(const char s[]);
int recuStrlen(const char s[]);

int main()
{
	char s[9] = "qawedf";
	int leng = recuStrlen(s);
	printf("%d\n", leng);

	return 0;
}

int stringLength(const char s[])
{
	if (s == NULL)
		return 0;
	else {
		int i = 0;
		while (s[i++] != '\0');
		return i;
	}

}


int recuStrlen(const char s[])
{
	if (*s == '\0')
		return 0;
	else
		return 1 + recuStrlen(s + 1);
}