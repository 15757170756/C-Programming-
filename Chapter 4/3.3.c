#include <stdio.h>

int main()
{
	double sum = 0, e;
	int n = 1;
	e = 1.0 / (n * (n + 1));
	while (n < 21 || e < 0.001) {
		e = 1.0 / (n * (n + 1));
		sum += e;
		++n;
	}
	printf("sum = %f, n = %d, e = %f\n", sum, n, e);

	return 0;
}