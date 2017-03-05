#include <stdio.h>
#include <math.h>

int main()
{
	double cubMePer = 1.42e8;
	double sum = 0;
	for (int i = 0; i < 64; ++i) {
		sum += pow(2, i);
	}
	double cubMe = sum / cubMePer;
	printf("共需要%.2lf立方米麦子\n", cubMe);

	return 0;
}