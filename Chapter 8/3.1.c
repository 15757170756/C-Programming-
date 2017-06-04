#include <stdio.h>

#define N 50
int fun(int x, int a[]);

int main()
{
	int a[N], len;
	int x = 3;
	len = fun(x,a);
	for (int i = 0; i < len; ++i) {
		printf("%d ", a[i]);
	}
	return 0;
}

int fun(int x,int a[])
{
	int len = 0;
	for (int i = 0; i < 100; ++i) {
		if (i % x == 0 && i % 2 != 0){
			a[len++] = i;
		}
	}
	return len;
}
