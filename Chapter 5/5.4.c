#include<stdio.h>
#include <math.h>

double NewtonIter();

int main()
{
	printf("使用牛顿迭代法求 x*x*x+2*x*x+3*x+4=0 在1附近的根为：%.4lf\n", NewtonIter());
	
	return 0;
}

double NewtonIter() {
	double x = 1.0, x0, fx, fx1, eps = 1e-5;
	do {
		x0 = x;
		fx = x0 * x0 * x0 + 2 * x0 * x0 + 3 * x0 + 4;
		fx1 = 3 * x0 * x0 + 4 * x0 + 3;
		x = x0 - fx / fx1;
	} while (fabs(x0 - x) >= eps);
	return x;
}