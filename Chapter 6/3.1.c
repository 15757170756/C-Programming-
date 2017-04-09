#include <stdio.h>

#define MAX(a, b, c) ((a > b) ? a : ((b > c) ? b : c)) 

int main()
{ 
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int m = MAX(a, b, c);
	printf("%d\n", m);

	return 0;
}

使用带参数的宏来实现从三个数中找出最大值





#include <stdio.h>

int Max(int a, int b, int c);

int main()
{ 
	int a = 5, b = 9, c = 0;
	int m = Max(a, b, c);
	printf("%d\n", m);

	return 0;
}

int Max(int a, int b, int c)
{
	return ((a > b) ? a : ((b > c) ? b : c));

	/*//最笨的方法
	int m;
	if (a > b && a > c)
		m = a;
	if (b > a && b > c)
		m = b;
	if (c > b && c > a)
		m = c;
	return m;*/

	//感觉这个稍微好一点
	/*int m;
	if (a > b && a > c)
		m = a;
	else if (b > c)
		m = b;
	else
		m = c;*/
}

使用函数实现从三个数中找出最大值