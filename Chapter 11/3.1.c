#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int a[10];
	FILE* fp;
	printf("请输入10个整数：\n");
	if ((fp = fopen("f.txt", "wb")) == NULL) {
		printf("无法打开f.txt文件。\n");
		getch();
		exit(1);
	}
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &a[i]);
		fprintf(fp, "%d ", a[i]);
	}
	fclose(fp);
	
	if ((fp = fopen("f.txt", "r")) == NULL) {
		printf("无法打开f.txt文件。\n");
		getch();
		exit(1);
	}

	int b[10];
	for (int i = 0; i < 10; ++i) {
		fscanf(fp, "%d", &b[i]);
		printf("%d ", b[i]);
	}

	return 0;
}
