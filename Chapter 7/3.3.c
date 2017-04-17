#include <stdio.h>

#define N 5

int sum(int a[N][N]);

int main()
{
	int num[N][N] = {   { 1, 2, 3, 4, 5 },
						{ 6, 7, 8, 9, 10 },
						{ 11, 12, 13, 14, 15 },
						{ 16, 17, 18, 19, 20},
						{ 21, 22, 23, 24, 25} };
	
	int sumDia = sum(num);
	printf("矩阵对角线元素之和为：%d\n", sumDia);

	return 0;
}

int sum(int a[N][N])
{
	int sum = 0;
	for (int i = 0; i < N; ++i)
		sum += a[i][i];
	return sum;
}