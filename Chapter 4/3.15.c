#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			printf("%3d", i * j);
		}
		printf("\n");
	}

	return 0;
}
这个是输出完整的九九乘法表
1  2  3  4  5  6  7  8  9
2  4  6  8  10 12 14 16 18
3  6  9  12 15 18 21 24 27
4  8  12 16 20 24 28 32 36
5  10 15 20 25 30 35 40 45
6  12 18 24 30 36 42 48 54
7  14 21 28 35 42 49 56 63
8  16 24 32 40 48 56 64 72
9  18 27 36 45 54 63 72 81




#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 1; i <= 9; ++i) {
		for (int j = i; j <= 9; ++j) {
			printf("%3d", i * j);
		}
		printf("\n");
	}

	return 0;
}
1  2  3  4  5  6  7  8  9
4  6  8  10 12 14 16 18
9  12 15 18 21 24 27
16 20 24 28 32 36
25 30 35 40 45
36 42 48 54
49 56 63
64 72
81





#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k;
	for (i = 1; i <= 9; ++i) {
		for (j = i; j <= 9; ++j) {
			printf("%3d", i * j);
		}
		printf("\n");
		for (k = 0; k < i; ++k) {
			printf("   ");
		}
	}

	return 0;
}
  1  2  3  4  5  6  7  8  9
     4  6  8 10 12 14 16 18
        9 12 15 18 21 24 27
          16 20 24 28 32 36
             25 30 35 40 45
                36 42 48 54
                   49 56 63
                      64 72
                         81