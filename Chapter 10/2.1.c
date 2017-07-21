#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int n;
	printf("请输入向量的长度n:\n");
	scanf("%d", &n);
	int* vector1 = (int*)malloc(sizeof(int)*n);
	if (vector1 == NULL) {
		printf("动态申请内存出错。\n");
		return 0;
	}
	int* vector2 = (int*)malloc(sizeof(int)*n);
	if (vector2 == NULL) {
		printf("动态申请内存出错。\n");
		return 0;
	}

	printf("请输入向量1的值：\n");
	for (int i = 0; i < n; ++i) 
		scanf("%d", &vector1[i]);

	printf("请输入向量2的值：\n");
	for (int i = 0; i < n; ++i)
		scanf("%d", &vector2[i]);

	printf("两个向量相加的和为：\n");
	for (int i = 0; i < n; ++i)
		printf("%d ", vector1[i] + vector2[i]);

	free(vector1);
	free(vector2);

	return 0;
}
