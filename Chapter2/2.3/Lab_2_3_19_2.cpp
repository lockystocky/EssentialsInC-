#include <iostream>
using namespace std;

int main(void) 
{
	double pi4 = 0.0;
	long n;
	bool adding = true;
	cout << "Number of iterations? ";
	cin >> n;
	for(long i = 1; i <= n; i++)
	{
		if(adding) 
		{
			pi4 += 1.0/(2.0*i - 1.0);
			//cout << " + 1/" << (2.0*i - 1.0) << endl;
		}
		else 
		{
			pi4 -= 1.0/(2.0*i - 1.0);
			//cout << " - 1/" << (2.0*i - 1.0) << endl;
		}
		adding = (!adding);
	}
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;
	cin.get();
	cin.get();
	return 0;
}