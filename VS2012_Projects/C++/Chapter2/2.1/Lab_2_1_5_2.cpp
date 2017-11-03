#include <iostream>
using namespace std;

int main(void) {
	float grossprice, taxrate, netprice, taxvalue;
	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;
	bool dataIsValid = (taxrate > 0 && taxrate < 100 && grossprice > 0);
	if (!dataIsValid) return 1;	
	netprice = grossprice/(1 + taxrate/100);
	taxvalue = grossprice - netprice;
	cout << "Net price: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;
	cin.get();
	cin.get();
	return 0;
}