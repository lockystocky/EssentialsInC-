#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {
	float a = 2.3, b = 2.3, c = 2.123456, d = 2.123456, f = 2.123456;
	cout << a << endl;
	cout << fixed << setprecision(2) << b << endl;
	cout << setprecision(6) << c << endl;	
	cout << setprecision(2)<< d << endl;
	cout << setprecision(0) << f << endl;
	cin.get();
	cin.get();
	return 0;
}