#include <stdio.h>
#include <math.h>

int main()
{
	int sum = 1;
	for (int i = 1; i < 10; ++i) {
		sum = sum * 2 + 1;
	}
	printf("第一天共有桃子%d个。\n", sum);

	return 0;
}
