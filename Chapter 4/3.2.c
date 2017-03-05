#include <stdio.h>

int main()
{
	int sum1 = 0, sum2 = 0;
	double sum3 = 0.0;
	for (int i = 1; i < 101; ++i) {
		sum1 += i;
	}

	for (int i = 1; i < 51; ++i) {
		sum2 += i * i;
	}

	for (int i = 1; i < 11; ++i) {
		sum3 += 1.0 / i;
	}
	double sum = sum1 + sum2 + sum3;
	printf("%f\n", sum);

	return 0;
}