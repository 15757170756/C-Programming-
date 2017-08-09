#include <stdio.h>

void swap1(int* a, int* b);
void swap2(int* a, int* b);

int main()
{
	int a = 0, b = 0;
	printf("交换前a=%d, b=%d\n", a, b);
	swap1(&a, &b);
	printf("swap1函数交换后a=%d, b=%d\n", a, b);
	swap2(&a, &b);
	printf("swap2函数再次交换后a=%d, b=%d\n", a, b);
}

void swap1(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void swap2(int* a, int* b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}