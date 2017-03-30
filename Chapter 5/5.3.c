#include<stdio.h>
#include <math.h>

void quaEuation(double, double, double);

int main()
{
	double a, b, c;
	while (1) {
		printf("请输入一元二次方程的三个系数a b c：\n");
		scanf("%lf%lf%lf", &a, &b, &c);
		quaEuation(a, b, c);
	}

	return 0;
}

void quaEuation(double a, double b, double c) {
	double x1, x2;
	if (0 == b * b - 4 * a * c) {
		x1 = x2 = (-b) / (2 * a);
		printf("此一元二次方程有一个实数根，x1=x2=%.2lf\n", x1);
	}
	else if (b * b - 4 * a * c > 0) {
		double delta = b * b - 4 * a * c;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("此一元二次方程有两个实数根，x1=%.2lf, x2=%.2lf\n", x1, x2);
	}
	else {
		double delta = -(b * b - 4 * a * c);
		double xReal = (-b) / (2 * a);
		double x1Imag = sqrt(delta) / (2 * a);
		double x2Imag = -sqrt(delta) / (2 * a);
		printf("此一元二次方程有两个虚数根，x1=%.2lf+%.2lfj, x2=%.2lf%.2lfj\n", xReal, x1Imag, xReal,x2Imag);
	}

}