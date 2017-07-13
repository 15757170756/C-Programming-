#include <stdio.h>

enum Week
{
	Mon = 1, Tus, Wed, Thu, Fri, Sat, Sun
};


int main()
{	
	int day;
	while (1) {
		scanf("%d", &day);
		switch (day)
		{
		case Mon:printf("Mon\n"); break;
		case Tus:printf("Tus\n"); break;
		case Wed:printf("Wed\n"); break;
		case Thu:printf("Thu\n"); break;
		case Fri:printf("Fri\n"); break;
		case Sat:printf("Sat\n"); break;
		case Sun:printf("Sun\n"); break;
			break;
		}
	}
	return 0;
}
