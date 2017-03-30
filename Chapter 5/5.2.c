#include<stdio.h>
#include <math.h>

int gbs(int a, int b);
int gys(int a, int b);

int main()
{
	int a, b;
	printf("请输入两个正整数，求最大公约数和最小公倍数：\n");
	scanf("%d%d", &a, &b);
	int num_gbs = gbs(a, b);
	int num_gys = gys(a, b);
	printf("最小公倍数是：%d\n最大公约数是：%d\n", num_gbs, num_gys);

	return 0;
}

int gbs(int a, int b) {
	int num_gbs;
	for (num_gbs = a; num_gbs % b != 0; num_gbs += a);
	return num_gbs;
}
int gys(int a, int b) {
	return (a * b) / gbs(a, b);
}