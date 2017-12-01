#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int year;
	cout << "Enter a year: ";
	cin >> year;
	string yearType = "";
	if(year % 4 != 0) yearType = "Common year";
	else if(year % 100 != 0) yearType = "Leap year";
	else if(year % 400 != 0) yearType = "Common year";
	else yearType = "Leap year";
	cout << yearType << endl;
	cin.get();
	cin.get();
	return 0;
}