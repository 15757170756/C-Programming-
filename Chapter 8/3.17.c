#include <stdio.h>

void display(int month);

int main()
{	
	int month;
	while (1)
	{
		scanf("%d", &month);
		display(month);
	}

	return 0;
}

void display(int month)
{
	char* monthName[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
		"Aug", "Sep", "Oct", "Nov", "Dec" };
	switch (month)
	{
	case 1:puts(monthName[0]);break;
	case 2:puts(monthName[1]); break;
	case 3:puts(monthName[2]); break;
	case 4:puts(monthName[3]); break;
	case 5:puts(monthName[4]); break;
	case 6:puts(monthName[5]); break;
	case 7:puts(monthName[6]); break;
	case 8:puts(monthName[7]); break;
	case 9:puts(monthName[8]); break;
	case 10:puts(monthName[9]); break;
	case 11:puts(monthName[10]); break;
	case 12:puts(monthName[11]); break;
	default:
		break;
	}
}