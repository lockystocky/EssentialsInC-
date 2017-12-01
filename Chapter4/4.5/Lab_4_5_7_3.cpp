#include <string>
#include <iostream>
using namespace std;

int main()
{
	string stop_words;
	getline(cin, stop_words);
	int stopWordsCount = 0;
	for(int i = 0; i < stop_words.size(); i++)
	{
		if(stop_words[i] == ',') stopWordsCount++;
	}
	string* stopWords = new string[stopWordsCount + 1];
	int j = 0;
	string word = "";
	for(int i = 0; i < stop_words.size(); i++)
	{
		//cout << "i = " << i << endl;
		if(stop_words[i] != ',') 
		{
			//cout << "word += stop_words[i];" << endl;
			word += stop_words[i];
		}
		else 
		{
			//cout << "stopWords[j] = word;" << endl;
			stopWords[j] = word;
			j++;
			word = "";
		}
		if(i == (stop_words.size() - 1))
		{
			//cout << "i == (stop_words.size() - 1)" << endl;
			stopWords[j] = word;
			j++;
		}
	}
	//stopWords[j] = word;
	
	string sentence;
	getline(cin, sentence);
	for(int i = 0; i < j; i++)
	{
		while(sentence.find(stopWords[i] + " ")!= string::npos || sentence.find(" " + stopWords[i])!= string::npos)
		{
			if(sentence.find(stopWords[i] + " ")!= string::npos) sentence.replace(sentence.find(stopWords[i] + " "), stopWords[i].size() + 1, "");
			if(sentence.find(" " + stopWords[i])!= string::npos) sentence.replace(sentence.find(" " + stopWords[i]), stopWords[i].size() + 1, "");
			
		}
	}
	/*while(sentence.find("  ")!= string::npos)
	{
		sentence.replace(sentence.find("  "), 2, " ");
	}*/
	// remove stop_words from sentence here
	cout << sentence << "\n";
	system("pause");
	return 0;
}