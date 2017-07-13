#include <stdio.h>

int main()
{
	int* p[3];
	int a[6] = { 2, 4, 6, 8, 10, 12 };
	for (int i = 0; i < 3; ++i)
		p[i] = &a[i * 2];

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("%d ", p[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", p[j][i]);
		}
	}

	return 0;
}

