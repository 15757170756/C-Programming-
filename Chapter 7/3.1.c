#include <stdio.h>

double Average(int a[]);

int main()
{
	int num[10];
	for (int i = 0; i < 10; ++i) 
		scanf("%d", &num[i]);
	double aver = Average(num);
	printf("10个数的平均数为：%.2lf\n", aver);

	return 0;
}

double Average(int a[])
{
	int sum = 0;
	double avera;
	for (int i = 0; i < 10; ++i) 
		sum += a[i];
	avera = sum / 10.0;
	return avera;
}