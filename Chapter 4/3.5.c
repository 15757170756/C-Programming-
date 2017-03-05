#include <stdio.h>

int main()
{
	while (1) {
		int N, sum = 0;
		printf("请输入整数N：\n");
		scanf("%d", &N);
		if (N >= 0) {
			for (int i = N; i <= 2 * N; ++i) {
				sum += i;
			}
			printf("因为N为非负数，输出为：%d\n", sum);
		}
		else {
			for (int i = 2 * N; i <= N; ++i) {
				sum += i;
			}
			printf("因为N为负数，输出为：%d\n", sum);
		}
	}

	return 0;
}