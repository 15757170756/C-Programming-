#include <stdio.h>
#include <string.h>

void insertSort(char ch[]);

int main()
{
	char ch[] = "computer";
	insertSort(ch);
	for (int i = 0; i < strlen(ch); ++i)
		putch(ch[i]);

	return 0;
}

void insertSort(char ch[])
{
	int i, j;
	for (i = 1; i < strlen(ch); ++i) {
		char temp = *(ch + i);
		for (j = i - 1; j >= 0 && ch[j] > temp; j--) {
			*(ch + j + 1) = *(ch + j);
		}
		*(ch + j + 1) = temp;
	}
}