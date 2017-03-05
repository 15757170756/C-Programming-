#include <stdio.h>

int main()
{
	double sum = 0;
	for (int i = 1; i <= 1000; ++i) {
		double fn = 1.0 / i;
		sum += fn;
	}
	printf("%f\n", sum);
}