#include<stdio.h>
#include <math.h>

void fun(double a, double b, double c);

int main()
{
	double a, b, c;
	printf("请输入三角形三条边长：\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	fun(a, b, c);

	return 0;
}

void fun(double a, double b, double c) {
	if ((a + b > c) && (c + b > a) && (a + c > b)) {
		double p = (a + b + c) / 2;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("三角形的面积为：%.2lf\n", s);
	}
	else {
		printf("无法组成三角形\n");
		//return 0;
	}
}