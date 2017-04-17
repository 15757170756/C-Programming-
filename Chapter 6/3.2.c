#include <stdio.h>

#define isLeapYear(year) ((0 == year % 4 && 0 != year % 100) || (0 == year % 400))

int main()
{
	for (int year = 1900; year <= 2000; ++year) {

#if isLeapYear(year)
		printf("%d是闰年。\n", year);
#else
		printf("%d不是闰年。\n", year);
#endif
	}

	return 0;
}

不知道为什么，这样写的输出结果是：
1900是闰年。
1901是闰年。
1902是闰年。
。。。
2000是闰年