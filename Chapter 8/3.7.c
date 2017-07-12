#include <stdio.h>

int fun(int a, int b);

int main()
{
	int a = 73, b = 25;
	int c = fun(a, b);
	printf("%d\n", c);

	return 0;
}

int fun(int a, int b)
{
	int c;
	int thousandBit = b / 10;
	int hundredBit = a / 10;
	int tenBit = b % 10;
	int oneBit = a % 10;

	c = 1000 * thousandBit + 100 * hundredBit + 10 * tenBit + oneBit;

	return c;
}