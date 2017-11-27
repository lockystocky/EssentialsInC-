#include <iostream>
#include <string>
using namespace std;
//add your own exception class here
//add functions code here

class Exception {
public:
	string msg;
	Exception(string txt) { msg = txt;}
};



float square_area(float a)
{
	if(a <= 0) throw Exception("Your input is not valid. The area can't be negative.");
	return a * a;
}

float rectangle_area(float a, float b)
{
	if(a <= 0 || b <= 0) throw Exception("Your input is not valid. The area can't be negative.");
	return a * b;
}

int main(void) {
	float a, b, r;
	cin >> a;
	cin >> b;
	try
	{
		float rsquare = square_area(a);
		float rrectangle = rectangle_area(a,b);
		cout << rsquare << endl << rrectangle << endl;
	}
	catch(Exception exp)
	{
		cout << exp.msg << endl;
	}
	//add a suitable catch block here
	system("pause");
	return 0;
}