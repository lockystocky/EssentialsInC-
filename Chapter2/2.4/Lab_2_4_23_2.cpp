#include <iostream>
#include <bitset>
using namespace std;

int main(void) {
	unsigned short int val;
	bool ispalindrome = true;
	cout << "value = ";
	cin >> val;
	string bin = bitset<8>(val).to_string(); 
    //cout << bin << endl;
    string old_bin = bin;
    reverse(bin.begin(), bin.end());
	ispalindrome = (old_bin == bin);
	if(ispalindrome)
	{cout << val << " is a bitwise palindrome" << endl;}
	else
	{cout << val << " is not a bitwise palindrome" << endl;}
	system("pause");
	return 0;
}
