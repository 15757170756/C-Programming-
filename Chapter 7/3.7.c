#include <stdio.h>

#define N 7

void stringConvert(char ch[], int n);

int main()
{
	char ch[N] = "abcABC";
	printf("原始字符：%s\n", ch);
	stringConvert(ch, N);
	printf("处理后字符：%s\n", ch);

	return 0;
}

void stringConvert(char ch[], int n)
{
	for (int i = 0; i < n; ++i) {
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] += 3;
		else if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= 3;
	}
}