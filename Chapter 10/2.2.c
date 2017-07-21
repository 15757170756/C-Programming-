#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int m, n;
	printf("请输入一共几个班级，一个班级几个学生：\n");
	scanf("%d%d", &m, &n);
	int* totalScore = (int*)malloc(sizeof(int)*m*n);
	printf("请输入每个班级数学课的成绩：\n");
	for (int i = 0; i < m*n; ++i)
		scanf("%d", &totalScore[i]);

	int maxScore = totalScore[0];
	int maxIdx = 0;
	for (int i = 1; i < m*n; ++i) {
		if (maxScore < totalScore[i]) {
			maxScore = totalScore[i];
			maxIdx = i;
		}
	}

	int whichClass = maxIdx / n + 1;
	int whichStudent = maxIdx % n + 1;
	printf("具有最高分成绩的学生是第%d个班级的第%d个学生。\n",
		whichClass, whichStudent);

	free(totalScore);
	return 0;
}
