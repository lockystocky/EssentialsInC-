#include <iostream>
using namespace std;

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

int main(void) {
	for(int yr = 2000; yr < 2002; yr++) {
	for(int mo = 1; mo <= 12; mo++)
	cout << monthLength(yr,mo) << " ";
	cout << endl;
	}
	system("pause");
	return 0;
}