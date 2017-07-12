#include <stdio.h>
#include <string.h>

void initialLetterCap(char ch[]);

int main()
{
	char ch[] = "i am a good boy, and you are a girl";
	initialLetterCap(ch);
	puts(ch);

	return 0;
}

void initialLetterCap(char ch[])
{
	int charLength = strlen(ch);
	ch[0] -= 32;
	for (int i = 1; i < charLength; ++i) {
		if (ch[i] == ' ') {
			ch[i + 1] -= 32;
		}
	}
}