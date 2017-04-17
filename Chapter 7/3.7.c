#include <stdio.h>

int main()
{
	int x, y, z;
	for (x = 0; x <= 100; ++x)
		for (y = 0; y <= 100; ++y)
			for (z = 0; z <= 100; ++z)
				if ((x + y + z == 100) &&
					(3 * x + 2 * y + z / 2 == 100))
					printf("大马：%d,中马：%d,小马：%d\n", x, y, z);
	return 0;
}
这个是比较笨的方法，穷举。
但是可以稍微化简一下，就可以减少运算次数。

#include <stdio.h>

int main()
{
	int x, y, z;
	for (x = 0; x <= 20; ++x) //5x + 3y = 100;
		for (y = 0; y <= 33; ++y)
			for (z = 0; z <= 100; ++z)
				if ((x + y + z == 100) &&
					(3 * x + 2 * y + z / 2 == 100))
					printf("大马：%d,中马：%d,小马：%d\n", x, y, z);
	return 0;
}