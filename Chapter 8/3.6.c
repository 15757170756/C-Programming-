#include <stdio.h>
#include <string.h>

#define M 3
#define N 5

void fun(char twoDia[M][N], char oneDia[]);

int main()
{
	char ch[M][N] = { "abcd", "efgh", "ijkl"};
	char chSum[M*N] = "";

	fun(ch, chSum);

	for (int i = 0; i < strlen(chSum); ++i)
		putch(chSum[i]);

	return 0;
}

void fun(char twoDia[][N], char oneDia[])
{
	int len = 0;
	for (int i = 0; i < N - 1; ++i){
		for (int j = 0; j < M; ++j) {
			oneDia[len++] = *(*(twoDia + j) + i);
		}
	}
	//*(*(ch + j) + i) 取的是第j行的第i列
	int lastIdx = M*(N - 1) + 1;
	oneDia[lastIdx] = '\0';
}