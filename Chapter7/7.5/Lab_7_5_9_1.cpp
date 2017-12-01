#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Exception {
public:
	string msg;
	Exception(string txt) { msg = txt;}
};

class IPAddress
{
public:
	string ip;
	IPAddress(string _ip);
	void Print();
	void PrintSubnets(int range);
	IPAddress()
	{
		ip = "0.0.0.0";
	}
	
	
};
IPAddress::IPAddress(string _ip)
{
	ip = _ip;
}

bool IsCorrect(IPAddress _ip)
{
	string ip = _ip.ip;
	regex isDigit("[1-9]");

	bool correctIp = false,  manyParts = false,
		onlyDigitsAndDots = true, BigPartValue = false;
	int lastDotPosition = 0, dotCount = 0, dotPosition;

	string dotIp = ip;
	for(int i = 0; i < ip.length(); i++)
	{
		if(ip.substr(i, 1) == ".") dotCount++;	
		if((ip.substr(i, 1) != ".") && (! regex_match(ip.substr(i, 1), isDigit))) onlyDigitsAndDots = false;
	}
	
	if(dotCount > 3) manyParts = true;

	if(!manyParts && onlyDigitsAndDots)
	{	
		string tempIp = ip;
		int firstOctet = atoi(tempIp.c_str());
		int i;
		for (i = 0; tempIp[i] != '.'; i++);	
		tempIp = &tempIp[i + 1];
		int secondOctet = atoi(tempIp.c_str());
		for (i = 0; tempIp[i] != '.'; i++);	
		tempIp = &tempIp[i + 1];
		int thirdOctet = atoi(tempIp.c_str());
		for (i = 0; tempIp[i] != '.'; i++);	
		tempIp = &tempIp[i + 1];
		int fourthOctet = atoi(tempIp.c_str());
		if(firstOctet > 255 || secondOctet > 255 || thirdOctet > 255 || fourthOctet > 255) BigPartValue = true;
	}
	bool isCorrect = (!manyParts && !BigPartValue && onlyDigitsAndDots);
	return isCorrect;
}

bool IsPowerOfTwo(int value)
{
	int InitValue = 1;
    while (InitValue < value)
		InitValue *= 2;
    if (InitValue == value)
		return true;
    return false;
}

void IPAddress::PrintSubnets(int range)
{	
	if (!IsPowerOfTwo(range)) throw Exception("Exception - invalid range.");
	if(!IsCorrect(ip)) throw Exception("Exception - invalid IP number.");
	string tempIp = ip;
		int firstOctet = atoi(tempIp.c_str());
		int i;
		for (i = 0; tempIp[i] != '.'; i++);	
		tempIp = &tempIp[i + 1];
		int secondOctet = atoi(tempIp.c_str());
		for (i = 0; tempIp[i] != '.'; i++);	
		tempIp = &tempIp[i + 1];
		int thirdOctet = atoi(tempIp.c_str());
		for (i = 0; tempIp[i] != '.'; i++);	
		tempIp = &tempIp[i + 1];
		int fourthOctet = atoi(tempIp.c_str());

		if((fourthOctet + range) > 255) throw Exception("Exception - too big range.");
		for(int j = 1; j <= range; j++)
		{
			cout << firstOctet << "." << secondOctet << "." << thirdOctet << "." << (fourthOctet + j) << endl;
		}

}

class IPHeader {
private: IPAddress srcIp;
		 IPAddress destIp;
public: IPHeader(IPAddress _srcIp, IPAddress _destIp)
		{
			if(!IsCorrect(_srcIp)) 
				throw Exception("Invalid IP Header - Source IP Address is invalid.");
			if(!IsCorrect(_destIp)) 
				throw Exception("Invalid IP Header - Destination IP Address is invalid.");			
			srcIp = _srcIp;
			destIp = _destIp;
			cout << "Valid IP Header" << endl;
		}
};

int main()
{
	try
	{
		IPAddress sIp = IPAddress("212.112.212.11");
		IPAddress dIp = IPAddress("212.112.212.12");
		IPHeader header = IPHeader(sIp, dIp);
		cout << endl;
	}
	catch(Exception exp)
	{
		cout << exp.msg << endl;
	}
	try
	{
		IPAddress sIp = IPAddress("212.112.212.333");
		IPAddress dIp = IPAddress("212.112.212.33");
		IPHeader header = IPHeader(sIp, dIp);
		cout << endl;
	}
	catch(Exception exp)
	{
		cout << exp.msg << endl;
	}
	
	system("pause");
	return 0;
}