#include <stdio.h>

static int count = 0; 
int func(int num)
{

	int temp = num - 1;
	if (temp % 5 == 0 && count < 5)
	{
		count++;
		return func(temp / 5 * 4);

	}
	else
		return num;
}

int main(void)
{
	int i;
	for (i = 1; i < 40000; i++)
	{
		if ((i - 1) % 5 == 0)         //代码优化
		{
			count = 0;
			if (func(i) != -1 && count == 5)
			{
				printf("总共有: %d个桃子\n", i); 
				break;
			}
		}
	}
	system("pause");
	return 0;
}
