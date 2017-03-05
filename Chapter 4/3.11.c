#include <stdio.h>
#include <math.h>

int isPrimNum(int n);

int main()
{
	printf("2000以内的哥德巴赫猜想：\n");
	for (int i = 1; i <= 2000; ++i) {
		for (int j = 1; j <= 2000; ++j) {
			for (int k = 1; k <= 2000; ++k) {
				if ((isPrimNum(i)) && (isPrimNum(j)) &&
					(k >=4) && (k % 2 == 0))
					if (i + j == k) {
						printf("%d + %d = %d\n", i, j, k);
					}
				
			}
		}
			
	}

	return 0;
}

int isPrimNum(int n) {
	int i;
	for (i = 2; i <= n / 2; ++i) {
		if (n % i == 0)
			return 0;
	}
	if ((i >= n / 2) && (n != 1))
		return 1;
}


这是比较笨的一个方法，凡是用for语句很多的，一般都是枚举，我觉得for语句不能超过两个。而且出来的是每种可能。。。
#include <stdio.h>
#include <math.h>

int isPrimNum(int n);
void GoldBach(int num);

int main()
{
	printf("2000以内的哥德巴赫猜想：\n");
	for (int i = 4; i <= 2000; ++i) {
		for (int j = 2; j <= i / 2; ++j) {
			if ((i % 2 == 0) && (isPrimNum(j)) && (isPrimNum(i - j))) {
				printf("%d = %d + %d\n", i, j, i - j);
				break;
			}//这里用的就是两个for循环，感觉差不多
		}
	}

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
	for (int i = 2; i < num / 2; ++i) {
		if (isPrimNum(i) && (isPrimNum(num - i))) {
			printf("%d = %d + %d\n", num, i, num - i);
			break;
		}
	}
}