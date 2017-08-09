#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char ch[10] = "abcdefghi";
	char storeChar[10];
	FILE* fp;
	if ((fp = fopen("1.txt", "wt")) == NULL) {
		printf("无法打开1.txt文件。\n");
		getch();
		exit(1);
	}
	fputs(ch, fp);
	fclose(fp);

	if ((fp = fopen("1.txt", "rt")) == NULL) {
		printf("无法打开1.txt文件。\n");
		getch();
		exit(1);
	}

	fgets(storeChar, 10, fp);

	puts(storeChar);

	fclose(fp);

	return 0;
}





#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char ch[10] = "abcdefghi";
	char storeChar[10];
	FILE* fp;
	if ((fp = fopen("1.txt", "wt")) == NULL) {
		printf("无法打开1.txt文件。\n");
		getch();
		exit(1);
	}
	fputs(ch, fp);
	fclose(fp);

	if ((fp = fopen("1.txt", "rt")) == NULL) {
		printf("无法打开1.txt文件。\n");
		getch();
		exit(1);
	}

	int i = 0;
	storeChar[i] = fgetc(fp);
	while (!feof(fp)){
		putchar(storeChar[i]);
		i++;
		storeChar[i] = fgetc(fp);
	}
	storeChar[i] = '\0';
	putchar('\n');
	puts(storeChar);

	fclose(fp);

	return 0;
}
