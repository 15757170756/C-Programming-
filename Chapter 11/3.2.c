#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char ch[20];
	gets(ch); 
	size_t charLength = strlen(ch);

	FILE* fp;
	if ((fp = fopen("test", "wt")) == NULL) {
		printf("无法打开f.txt文件。\n");
		getch();
		exit(1);
	}

	for (int i = 0; i < charLength; ++i) {
		if (islower(ch[i]) != 0)
			ch[i] -= 32;
	}
	fprintf(fp, "%s", ch);

	return 0;
}
