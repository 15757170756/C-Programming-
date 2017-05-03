#include <stdio.h>

#define N1 3
#define N2 4
#define N3 (N1 + N2)

void meageSort(int arr1[], int n1, int arr2[], int n2, int arr3[]);

int main()
{
	int arr1[N1] = { 1, 2, 5 };
	int arr2[N2] = { 3, 4, 7, 8 };
	int arr3[N3] = { 0 };
	meageSort(arr1, N1, arr2, N2, arr3);
	for (int i = 0; i < N3; ++i)
		printf("%d ", arr3[i]);
	
	return 0;
}

void meageSort(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;
	while ((i < n1) && (j < n2)) {
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}
	//i--;
	while (i < n1)
		arr3[k++] = arr1[i++];
	//j--;
	while (j < n2)
		arr3[k++] = arr2[j++];
}