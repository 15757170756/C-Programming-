#include <stdio.h>
#include <string.h>

#define N 8
#define maxScore 90
#define minScore 65

struct stuInfo
{
	char stuNum[20];
	int score;
};

int main()
{	
	struct stuInfo stus[N], stusBackup[N];
	for (int i = 0; i < N; ++i) {
		scanf("%s%d", stus[i].stuNum, &stus[i].score);
		strcpy(stusBackup[i].stuNum, "");
		stusBackup[i].score = 0;
	}

	for (int i = 0; i < N; ++i) {
		if (stus[i].score >= minScore && stus[i].score <= maxScore) {
			strcpy(stusBackup[i].stuNum, stus[i].stuNum);
			stusBackup[i].score = stus[i].score;
		}
			
	}
	printf("指定分数范围内的学生数据：\n");
	for (int i = 0; i < N; ++i) {
		if (stusBackup[i].score != 0) {
			printf("学号:%s 成绩：%d\n", stusBackup[i].stuNum, stusBackup[i].score);
		}
	}

	return 0;
}
