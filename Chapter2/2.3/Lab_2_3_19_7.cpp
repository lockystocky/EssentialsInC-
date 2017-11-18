#include <iostream>
using namespace std;

int main(void) {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	long long previous = 1, current = 1, next = 1;
	for(int i = 0; i < (n - 2); i++)
	{
		next = current + previous;
		previous = current;
		current = next;		
	}
	cout << next << endl;
	cin.get();
	cin.get();
	return 0;
}