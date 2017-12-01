#include <iostream>
#include<string>
using namespace std;

int main(void) {
	int a = 8, b = 0, c = 0;
	cin >> a;
	cin >> b;
	try {
	if(b == 0) throw string("Your input is not valid, you can't divide by zero.");
	c = a / b;
	}
	catch(string exp)
	{
		cout << exp << endl;
	}
	cout << c << endl;
	system("pause");
	return 0;
}