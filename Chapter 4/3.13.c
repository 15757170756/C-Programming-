#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	for (i = 1; i < 10000; ++i) {
		for (int j = 1; j <= 5 && i % 5 == 1 && i / 5 > 0; ++j) {
			i = (i - 1) / 5 * 4;
		}
	}
	printf("这堆椰子至少有%d个。\n", i);

	return 0;
}
