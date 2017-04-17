#include <stdio.h>

int ArmstrongNum(int n);

int main()
{
	for (int i = 1; i < 1001; ++i) {
		if (ArmstrongNum(i))
			printf("阿姆斯特朗数是：%d\n", i);
	}

	return 0;
}

int ArmstrongNum(int n) {
	int sum = 0, remain, origin = n;
	while (n > 0) {
		remain = n % 10;
		sum += remain * remain * remain;
		n /= 10;
	}
	if (origin == sum)
		return 1;
	else
		return 0;
}