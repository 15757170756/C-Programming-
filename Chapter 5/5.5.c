#include<stdio.h>
#include <math.h>

void SecConvert(int sec);

int main()
{
	int sec;
	while (1) {
		printf("请输入一共几秒：\n");
		scanf("%d", &sec);
		SecConvert(sec);
	}
	
	return 0;
}

void SecConvert(int sec) {
	int minutes = 0, hours = 0, days = 0, months = 0, years = 0;
	int secLeft = sec % 60;
	while (sec - 60 >= 0) {
		sec -= 60;
		++minutes;
		while (minutes - 60>= 0) {
			minutes -= 60;
			++hours;
			while (hours - 24 >= 0) {
				hours -= 24;
				++days;
				while (days - 30 >= 0) {
					days -= 30;
					++months;
					while (months - 12 >= 0) {
						months -= 12;
						++years;
					}
				}
			}
		}
	}

	printf("%d年：%d月：%d天：%d时：%d分：%d秒(每个月算30天)\n", years, months, days, hours, minutes, secLeft);
}