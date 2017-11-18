#include <iostream>
using namespace std;

int main(void) {
	int sys;
	float m, ft, in;
	const float FOOTS_IN_METER = 3.2808398950131;
	const float INCHES_IN_FOOT = 12;
	cout << "Which system do you want to use? Enter '0' for metric or '1' for imperal: ";
	cin >> sys;
	if(sys == 1) 
	{
		cout << "Enter foots: ";
		cin >> ft;
		cout << "Enter inches: ";				
		cin >> in;
		in += ft * INCHES_IN_FOOT;
		m = in / (FOOTS_IN_METER* INCHES_IN_FOOT);
		cout << m << "m" << endl;
	}
	else if(sys == 0) 
	{
		cout << "Enter data: ";
		cin >> m;
		ft = (int) (m * FOOTS_IN_METER);
		in = (m * FOOTS_IN_METER  - ft) * INCHES_IN_FOOT; 
		cout << ft << "'" << in << "\"" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}