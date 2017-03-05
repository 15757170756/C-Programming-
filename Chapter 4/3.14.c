#include <stdio.h>
#include <math.h>

int main()
{
	double x0, x, r, fx1, fx, eps = 1e-5;
	x = 1.5;
	do {
		x0 = x;
		fx = 2 * x * x * x - 4 * x * x + 3 * x - 6;
		fx1 = 6 * x * x - 8 * x + 3;
		x = x0 - fx / fx1;
	} while (fabs(x - x0) >= eps);
	printf("方程在1.5附近的根为：%.2lf\n", x);

	return 0;
}
