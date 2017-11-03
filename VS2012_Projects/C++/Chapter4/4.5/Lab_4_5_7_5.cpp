#include <string>
#include <iostream>
#include <regex>
using namespace std;

int main()
{
	cout << "Enter pattern: ";
	string pattern;
	getline(cin, pattern);
	string regexExpression = "";
	cmatch cm;
	for(int i = 0; i < pattern.size(); i++)
	{
		if(pattern[i] == 'D') regexExpression += "[0-9]";
		if(pattern[i] == 'A') regexExpression += "[a-zA-Z]";
		if(pattern[i] =='?') regexExpression += ".";
		
		if (regex_match(pattern.substr(i,1), regex("[a-z]")))
		{
			regexExpression += "[";
			string letter = pattern.substr(i, 1);
			transform(letter.begin(), letter.end(), letter.begin(),(int (*)(int))toupper);
			regexExpression += letter;
			transform(letter.begin(), letter.end(), letter.begin(),(int (*)(int))tolower);
			regexExpression += letter;
			regexExpression += "]";		
		}

		if (!regex_match(pattern.substr(i,1), regex("[a-zA-Z0-9\?]")))
		{
			regexExpression += "\\" + pattern.substr(i,1);
		}
	}
	cout << regexExpression << endl;
	cout << "enter sentence: ";
	string sentence;
	getline(cin, sentence);
	smatch result;
	regex e (regexExpression);
	while (regex_search (sentence,result,e)) 
	{    
		cout << result[0] << endl;
		sentence = result.suffix();
    }
	system("pause");
	return 0;
}