5、//求两个数的最大公约数和最小公倍数
//一般方法
#include<stdio.h>
int main()
{
	int n, m, gbs, gys;
	scanf("%d%d", &n, &m);
	for (gbs = m; gbs % m != 0 || gbs % n != 0;gbs += m);
	gys = n * m / gbs;
	printf("最小公倍数%d\n最大公约数%d", gbs, gys);
}
