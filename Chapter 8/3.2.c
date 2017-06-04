#include <stdio.h>

#define N 5

int fun(int a[], size_t n);

int main()
{
	int a[N] = { 3, 4, 5, 1, 2 };
	int k = fun(a, N);
	printf("%d\n", k);

	return 0;
}

int fun(int a[], size_t n)
{
	int maxIdx = 0;
	for (size_t i = 0; i < n; ++i) {
		if (a[i] > a[maxIdx])
			maxIdx = i;
	}
	return maxIdx;
}
