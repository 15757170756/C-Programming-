#include <stdio.h>

void chaImfor(char* ch[3], int a[]);

int main()
{
	char* ch[3] = { "123abcA", "aAbC23 &@", "@#$aFRd3 D 45" };
	int a[5] = { 0 };
	chaImfor(ch, a);
	printf("大写字母个数：%d\n", a[0]);
	printf("小写字母个数：%d\n", a[1]);
	printf("数字个数：    %d\n", a[2]);
	printf("空格个数：    %d\n", a[3]);
	printf("其他字符个数：%d\n", a[4]);

	return 0;
}

void chaImfor(char* ch[3], int a[])
{
	for (int i = 0; i < 3; ++i) {
		char* Temp = ch[i];
		while (*Temp != '\0') {
			if (*Temp >= 'A' && *Temp <= 'Z')
				a[0]++;
			else if (*Temp >= 'a' && *Temp <= 'z')
				a[1]++;
			else if (*Temp >= '0' && *Temp <= '9')
				a[2]++;
			else if (*Temp == ' ')
				a[3]++;
			else
				a[4]++;
			Temp++;
		}
	}
}