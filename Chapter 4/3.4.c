#include <stdio.h>
#include <math.h>

#define PI 3.1415926

long long int fact(int n);

int main()
{
	while (1) {
		double x, eps, sinx = 0, e;
		int n = 0;
		printf("请输入x的值以及eps：\n");
		scanf("%lf%lf", &x, &eps);
		double cyc = x / (2 * PI);
		double tmp = x;
		x = x - ((int)cyc) * 2 * PI;
		e = pow(x, 2 * n + 1) / (fact(2 * n + 1));
		while (e > eps) {
			e = pow(x, 2 * n + 1) / (fact(2 * n + 1));
			if (n % 2 == 0) {
				sinx += e;
			}
			else {
				sinx += (-1) * e;
			}
			++n;
		}
		printf("sin%.3f的值为%.3f\n", tmp, sinx);
		printf("sin%.3f的真是值为%.3f\n", tmp, sin(x));
		//printf("%lf %lf\n", x, eps);
		//printf("%d\n", n);
	}

	return 0;
}

long long int fact(int n) {
	long long int sum = 1;
	for (int i = 1; i <= n; ++i) {
		sum *= i;
	}
	return sum;
}

这个用泰勒展开算sinx的值，其实挺有陷阱的。如果不凭借三角函数的2pi，循环， 等输入x的值大了的话，算阶乘就很麻烦
因为n！，n太大的long long int都不行。