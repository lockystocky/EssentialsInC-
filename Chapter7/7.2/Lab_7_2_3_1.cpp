#include <iostream>
#include <string>
using namespace std;
const int DivideByZero = 111;
using namespace std;
float internaldiv(float arg1, float arg2)
{
	if (0==arg2)
	throw string("Your input is not valid, you can't divide by zero.");
	return arg1 / arg2;
}
float div(float arg1, float arg2) {
	if(arg2 == 0.0) throw string("Your input is not valid, you can't divide by zero.");
	return internaldiv(arg1, arg2);	
}int main(void) {
	float r, a, b;
	while(cin >> a) {
		cin >> b;
		try
		{
			r = div(a,b);
			cout << r << endl;
		}
		catch(string exp)
		{
			cout << "Are you kidding me?" << end;
			cout << exp << endl;
		}
	}
	system("pause");
	return 0;
}