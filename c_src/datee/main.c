#include "date.h"

int main(void)
{
	//int today_year, today_month, today_day;
	struct date today;

	//today_year = 2024;
	//today_month = 7;
	//today_day = 12;
	today.year = 2024;
	today.month = 7;
	today.day = 12;
	
	struct date birthday = {2000, 4, 24};

	//int tmp_year;
	//int tmp_month;
	//int tmp_day;
	struct date tmp;
	
	//tmp_year = today_year;
	//tmp_month = today_month;
	//tmp_day = today_day;
	tmp = today;
	
	//printDate(today_year, today_month, today_day);
	//printDate(birthday_year, birthday_month, birthday_day);
	//printDate(today);
	//printDate(birthday);
	printDate(&today);
	printDate(&birthday);
	
	return 0;
}
