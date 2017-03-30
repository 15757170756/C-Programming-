#include <stdio.h>
#include <math.h>

int isPrimNum(int n);
void GoldBach(int num);

int main()
{
	printf("2000以内的哥德巴赫猜想：\n");
	GoldBach(2000);

	return 0;
}

int isPrimNum(int n) {
	int i;
	for (i = 2; i <= n / 2 && (n != 1); ++i) {
		if (n % i == 0)
			return 0;
	}
	//if ((i >= n / 2) && (n != 1))
	return 1;
}

void GoldBach(int num) {
	for (int i = 4; i <= num; i += 2) {
		for (int j = 2; j <= i / 2; ++j) {
			if (isPrimNum(j) && (isPrimNum(i - j))) {
				printf("%d = %d + %d\n", i, j, i - j);
				break;
			}
		}
	}
}