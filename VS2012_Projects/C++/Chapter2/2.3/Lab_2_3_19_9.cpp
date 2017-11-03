#include <iostream>
using namespace std;

int main(void) 
{
	int sideSize;
	cout << "Enter an odd value (side size): ";
	cin >> sideSize;
	long long result = 1 + 4*(sideSize / 2)*(sideSize / 2);
	cout << result << endl;	
	cin.get();
	cin.get();
	return 0;
}