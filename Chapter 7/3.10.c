#include <stdio.h>

#define N 7

void insertSort(int a[], int n);

int main()
{
	int a[N] = { 5, 3, 6, 7, 3, 1, 0 };
	printf("待排序的数组：");
	for (int i = 0; i < N; ++i)
		printf("%d ", a[i]);
	printf("\n");

	insertSort(a, N);

	printf("排序后的数组：");
	for (int i = 0; i < N; ++i)
		printf("%d ", a[i]);

	return 0;
}


void insertSort(int a[], int n)
{
	int i, j, key;
	for (int i = 1; i < n; ++i) {
		key = a[i]; //插入排序，假设第一个数是排好序的
		for (j = i - 1; j >= 0 && a[j] > key; --j) //需要一个j来指向i的前几个数，一次比较
			a[j + 1] = a[j];
		a[j+1] = key;
	}
}
