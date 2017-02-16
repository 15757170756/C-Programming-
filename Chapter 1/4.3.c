3、//求1+2+3+······+10
#include<stdio.h>
int main()
{
	int i, sum = 0;
	for (i = 1; i < 11; i++)
		sum += i;
	printf("%d", sum);
}