#include <stdio.h>

int main()
{
	for (int i = 1; i < 10000; ++i) {
		if ((1 == i % 5) && (5 == i % 6) &&
			(4 == i % 7) && (10 == i % 11))
			printf("韩信共有%d兵\n", i);
	}

	return 0;
}
这个没有规定士兵最多几个，这样结果是有很多的，当然，这其实也是本办法，枚举法。