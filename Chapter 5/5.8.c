#include <stdio.h>

void num2strRecu(int n);

int main()
{
	int a = -912345;
	num2strRecu(a);

	return 0;
}

void num2strRecu(int n) {
	if (n < 0) {
		putchar('-');
		n *= (-1);
	}
	if (n / 10)
		num2strRecu(n / 10);
	putchar(n % 10 + '0');
}

这个是网上找的递归版本。优点是比较简单易懂，但是缺点是直接打印出来了，没有返回值，或者是从形参中返回。


