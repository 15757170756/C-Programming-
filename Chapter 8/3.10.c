#include <stdio.h>

#define N 10

void fun(int arr[], int n, int startIndx, int num);

int main()
{
	int a[N] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int startIndx = 4, num = 5;
	fun(a, N, startIndx, num);
	for (int i = 0; i < N; ++i) {
		printf("%d ", *(a + i));
	}

	return 0;
}

void fun(int arr[], int n, int startIndx, int num)
{
	for (int i = startIndx - 1, j = startIndx + num - 2, k = 0; 
		k < num / 2; ++i, --j, k++) {
		int temp = *(arr + i);
		*(arr + i) = *(arr + j);
		*(arr + j) = temp;
	}
}