#include <stdio.h>

int main()
{
	int a, b, c;
	while (1) {
		printf("请输入三个数（判断能否形成三角形）：\n");
		scanf("%d%d%d", &a, &b, &c);
		if ((a + b > c) && (a + c > b) && (c + b > a)) {
			if ((a == b) || (a == c) || (b == c)) {
				if ((c * c == a * a + b * b) || (b * b == a * a + c * c) ||
					(a * a == c * c + b * b))
					printf("该三角形为等腰直角三角形\n");
				if (a == b && b == c)
					printf("该三角形为等边三角形\n");
				else
					printf("该三角形为一般等腰三角形\n");
			}
			else if ((c * c == a * a + b * b) || (b * b == a * a + c * c) ||
				(a * a == c * c + b * b))
				printf("该三角形为一般直角三角形\n");
			else
				printf("该三角形为一般三角形\n");
		}
		else {
			printf("无法组成三角形\n");
		}
	}

	return 0;
}