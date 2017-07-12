#include <stdio.h>

#define M 5
#define N 60

void fun(char ch[][N], int saveNum[]);

int main()
{
	char ch[M][N] = { "abcd124", " ADF%^&   3", "123Abc ()\"",
		"   ", "12Ab!@ " };
	int a[5] = { 0 };
	fun(ch, a);

	printf("upLetterNum:%d, LowerLetterNum:%d, digitalNum:%d, spaceNum:%d, othersNum:%d\n", a[0],a[1],a[2],a[3],a[4]);
	return 0;
}

void fun(char ch[][N], int saveNum[])
{
	int upLetterNum = 0, LowerLetterNum = 0,
		digitalNum = 0, spaceNum = 0, othersNum = 0;

	for (int i = 0; i < M; ++i) {
		char* temp = *(ch + i);
		for (int j = 0; j < N; ++j) {
			if (*(temp + j) != '\0') {
				if (*(temp + j) >= 'A' && *(temp + j) <= 'Z')
					upLetterNum++;
				else if (*(temp + j) >= 'a' && *(temp + j) <= 'z')
					LowerLetterNum++;
				else if (*(temp + j) >= '0' && *(temp + j) <= '9')
					digitalNum++;
				else if (*(temp + j) == ' ')
					spaceNum++;
				else
					othersNum++;
			}
		}
	}
	saveNum[0] = upLetterNum;
	saveNum[1] = LowerLetterNum;
	saveNum[2] = digitalNum;
	saveNum[3] = spaceNum;
	saveNum[4] = othersNum;
}