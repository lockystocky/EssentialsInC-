#include <iostream>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) {
if(year % 4 != 0) return false;
	else if(year % 100 != 0) return true;
	else if(year % 400 != 0) return false;
	return true;
}

int monthLength(int year, int month) {
	int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(isLeap(year) && month == 2) return 29;
	return daysInMonth[month - 1];
}

int dayOfYear(Date date) {
	int day = 0;
	for(int i = 1; i < (date.month); i++)
	{
		day += monthLength(date.year, i);
	}
	day += date.day;
	return day;
}



int daysBetween(Date firstDate, Date secondDate){
	if((secondDate.year < firstDate.year) ||
		((secondDate.year == firstDate.year) && (secondDate.month < firstDate.month)) ||
		((secondDate.year == firstDate.year) && (secondDate.month == firstDate.month) && (secondDate.day < firstDate.day))) return -1;

	int days = 0;
	for (int i = (firstDate.year + 1); i < secondDate.year; i++)
	{
		if(isLeap(i)) days += 366;
		else days += 365;
	}
	days += dayOfYear(secondDate);
	int daysInFirstDateYear;
	if(isLeap(firstDate.year)) daysInFirstDateYear = 366;
		else daysInFirstDateYear = 365;
		days += (daysInFirstDateYear - dayOfYear(firstDate));
	
	return days;
}

int main(void) {
	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	system("pause");
	return 0;
}