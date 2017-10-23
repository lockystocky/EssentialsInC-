#include <iostream>
using namespace std;

int main(void) {
	float eps = 0.000001;
	float a , b;
	cout << "Enter a:" << endl;
	cin >> a;
	cout << "Enter b:" << endl;
	cin >> b;
	bool answer = ((1/a - 1/b) < eps);
	cout << "Results are" << (answer ? "" : " not") <<  " equal (by "<< fixed << eps << " epsilon)" <<endl;
	cin.get();
	cin.get();
	return 0;
}