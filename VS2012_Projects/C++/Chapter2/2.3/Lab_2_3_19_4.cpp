#include <iostream>
using namespace std;

int main(void)
{
	
	int n;
	double result = 1.0;
	cout << "Enter the negative number of 2: ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		result /= 2;
	}
	cout.precision(10);
	cout << result << endl;
	cin.get();
	cin.get();
	return 0;
}