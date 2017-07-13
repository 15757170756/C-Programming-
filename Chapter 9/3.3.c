#include <stdio.h>

struct stuInfo
{
	char Num[20];
	char name[20];
	double score;
};

int main()
{	
	struct stuInfo stu[5];
	for (int i = 0; i < 5; ++i) {
		scanf("%s%s%lf", stu[i].Num, stu[i].name, &stu[i].score);
	}

	double avgScore = 0;
	double maxScore = stu[0].score;
	int idx = 0;
	for (int i = 0; i < 5; ++i) {
		avgScore += stu[i].score;
		if (maxScore < stu[i].score) {
			maxScore = stu[i].score;
			idx = i;
		}
			
	}

	avgScore /= 5;
	printf("the average score of the 5 students is: %.2f\n", avgScore);
	printf("the highest score student:Num:%s, name:%s, score:%.2f\n",
		stu[idx].Num, stu[idx].name, stu[idx].score);

	return 0;
}
