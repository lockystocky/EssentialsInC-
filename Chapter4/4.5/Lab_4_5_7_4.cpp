#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter 2 words: ";
	string word1, word2;
	cin >> word1;
	cin >> word2;
	int letterCount1 = word1.size(), letterCount2 = word2.size();
	string* letters1 = new string[letterCount1];
	string* letters2 = new string[letterCount2];
	bool isAnagram = true;
	for(int i = 0; i < word1.size(); i++)
	{
		if(word2.find(word1[i]) == string::npos) isAnagram = false;
	}
	for(int i = 0; i < word2.size(); i++)
	{
		if(word1.find(word2[i]) == string::npos) isAnagram = false;
	}
	if(isAnagram) cout << "anagrams" << endl;
	else cout << "not anagrams" << endl;

	delete[] letters1;
	delete[] letters2;
	system("pause");
	return 0;
}