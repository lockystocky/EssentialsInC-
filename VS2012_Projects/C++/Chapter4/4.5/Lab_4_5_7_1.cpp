#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter sentence: ";
	string sentence;
	getline(cin, sentence);
	int wordStart = 0, wordEnd = sentence.find(" "), temp;
	string word = "";
	for(int i = 0; i < sentence.size(); i++)
	{
		if(sentence[i] != ' ') word += sentence[i];
		else 
		{
			if (sentence.find(string(word + ' ' + word)) != string::npos)
			{
				sentence.replace(sentence.find(string(word + ' ' + word)), string(word + ' ' + word).size(), word);
				i -= (word.size() + 1);
			}
			word = "";
		}
	}	
	cout << sentence << "\n";
	system("pause");
	return 0;
}