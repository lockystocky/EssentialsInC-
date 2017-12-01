#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int firstOctet, secOctet, thirdOctet, fourOctet;
	cin >> firstOctet;
	cin >> secOctet;
	cin >> thirdOctet;
	cin >> fourOctet;
	string ipAddress = "";
	if (firstOctet >=1 && firstOctet <=255 && 
		secOctet >=1 && secOctet <=255 && 
		thirdOctet >=1 && thirdOctet <=255 &&
		fourOctet >=1 && fourOctet <=255)
	{
		ipAddress = to_string(firstOctet) + "." + 
		to_string(secOctet) + "." + 
		to_string(thirdOctet) + "." +
		to_string(fourOctet);
		cout << ipAddress << endl;
	}
	else
	{
		cout << "Error: Number is out of range" << endl;
	}
	
	cin.get();
	cin.get();
	return 0;
}