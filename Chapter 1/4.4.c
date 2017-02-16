4、//判断同时被3和7整除
#include<stdio.h>
int main()
{
	int i;
	printf("Please input a integer:\n");
	scanf("%d", &i );
	if (i % 3 == 0 && i % 7 == 0)
		printf("Yes");
	else
		printf("No");
	
}