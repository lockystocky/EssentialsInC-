#include <iostream>
using namespace std;

int main(void){
	int c0;
	cout << "Enter one natural number: ";
	cin >> c0;
	int steps = 0;
	while (c0 != 1)
	{
		if(c0 % 2 == 0) c0 /= 2;
		else
		{
			c0 = 3*c0 + 1;
		}
		cout << c0 << endl;
		steps ++;
	}
	cout << "steps = " << steps << endl;
	cin.get();
	cin.get();
	return 0;
}