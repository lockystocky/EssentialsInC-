#include <iostream>
using namespace std;
 
int main(void)
{
   double year, month, day, weekday;
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;
	bool dataIsValid = (year >= 1900 && year <2100 &&
		month >=1 && month <= 12 && day > 0 && day < 32);
	if (dataIsValid)
	{
		month -= 2;
		if (month < 0) 
		{
			month +=12;
			year--;
		}
		month *= 83;
		month /= 32.0;
		month += day;
		month += year;
		month += (year / 4.0);
		month -= (year / 100.0);
		month += (year / 400.0);
		cout << "month = " << month << endl;
		weekday = ((int) month) % 7;
		cout << weekday << endl;
	}
	cin.get();
	cin.get();
	return 0;
}