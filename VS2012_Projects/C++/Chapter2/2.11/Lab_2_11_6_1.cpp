#include <iostream>
using namespace std;

struct Time
{
	int Hours, Minutes;
};



int main(void) {
	Time currentTime, nextTime;
	cout << "Enter hours: ";
	cin >> currentTime.Hours;
	cout << "Enter minutes: ";
	cin >> currentTime.Minutes;
	int addedMinutes;
	cout << "Added minutes: ";
	cin >> addedMinutes;
	int minutes = currentTime.Minutes + currentTime.Hours*60 + addedMinutes;
	nextTime.Hours = (minutes / 60) % 24;
	nextTime.Minutes = minutes % 60;
	cout << nextTime.Hours << ":" << nextTime.Minutes << endl;
	system("pause");
	return 0;
}