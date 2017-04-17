#include <stdio.h>

void reverse(int a[]);

int main()
{
	int num[10];
	for (int i = 0; i < 10; ++i) 
		scanf("%d", &num[i]);
	reverse(num);
	for (int i = 0; i < 10; ++i)
		printf("%d ", num[i]);

	return 0;
}

void reverse(int a[])
{
	for (int i = 0, j = 10 - 1; i < 10 / 2; ++i, --j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}