#include <iostream> 
#include <string> 
#include <regex>

using namespace std;

int main(void) {
	//regex correctIp("[1-9]{1,3}\.[1-9]{1,3}\.[1-9]{1,3}\.[1-9]{1,3}");
	regex isDigit("[1-9]");
	//regex TooManyCharactersInPart("[1-9]{1,3}\.[1-9]{1,3}\.[1-9]{1,3}\.[1-9]{1,3}");
	//if(regex_match("1.1.1.1", ip)) cout << "true" << endl;
	//else cout << "false" << endl;
	cout << "Enter ip: ";
	string ip;
	cin >> ip;
	bool correctIp = false, manyCharacters = false, manyParts = false,
		onlyDigitsAndDots = true, BigPartValue = false;
	int lastDotPosition = 0, dotCount = 0, dotPosition;

	string dotIp = ip;
	for(int i = 0; i < ip.length(); i++)
	{

		if(ip.substr(i, 1) == ".") dotCount++;	
		if((ip.substr(i, 1) != ".") && (! regex_match(ip.substr(i, 1), isDigit))) onlyDigitsAndDots = false;
	}
	
	if(dotCount > 3) manyParts = true;
	if(!manyParts && onlyDigitsAndDots){
		string tempIp = ip;
		string firstOctet = tempIp.substr(0, tempIp.find("."));
		tempIp = tempIp.substr(tempIp.find(".") + 1);
		string secondOctet = tempIp.substr(0, tempIp.find("."));
		tempIp = tempIp.substr(tempIp.find(".") + 1);
		string thirdOctet  = tempIp.substr(0, tempIp.find("."));
		tempIp = tempIp.substr(tempIp.find(".") + 1);
		string fourthOctet = tempIp.substr(0, tempIp.find("."));
		if(firstOctet.length() > 3 || secondOctet.length() > 3 ||
			thirdOctet.length() > 3 || fourthOctet.length() > 3) manyCharacters = true;
	}
	if(!manyParts && !manyCharacters && onlyDigitsAndDots){
		int firstOctet = atoi(ip.substr(0, 3).c_str());
		int secondOctet = atoi(ip.substr(4, 3).c_str());
		int thirdOctet = atoi(ip.substr(8, 3).c_str());
		int fourthOctet = atoi(ip.substr(12, 3).c_str());
		if(firstOctet > 255 || secondOctet > 255 || thirdOctet > 255 || fourthOctet > 255) BigPartValue = true;
	}
	correctIp = (manyParts && manyCharacters && BigPartValue && onlyDigitsAndDots);
	if(!onlyDigitsAndDots) cout << "Only digits and dots allowed" << endl;
	else if(manyParts) cout << "Too many parts" << endl;
	else if(manyCharacters) cout << "Too many characters in a part" << endl;
	else if(BigPartValue) cout << "Too big a value of a part" << endl;
	else if(correctIp) cout << "Correct IP" << endl;
	system("pause");
	return 0;
}