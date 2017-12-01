#include <iostream>
using namespace std;

int main(void) {
	int n;
	cout << "Enter a positive integer value greater than 1: ";
	cin >> n;
	int count = 0;
    for (; n; count++)
		n &= (n - 1);
	cout << count << endl;
	cin.get();
	cin.get();
	return 0;
}