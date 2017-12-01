#include <iostream> 
#include <string> 
#include <algorithm>

using namespace std;

int main(void) {
	const int LETTERS_NUMBER = 26;
	string sentence; 
	getline(cin, sentence);
	transform(sentence.begin(), sentence.end(), sentence.begin(),::tolower);

	string letters[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
	"j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
	"w", "x", "y", "z"};
	int countLetters[LETTERS_NUMBER] = {0};
	for(int i = 0; i < sentence.length(); i++)
	{
		string letter = sentence.substr(i, 1);
		for(int j = 0; j < LETTERS_NUMBER; j++)
		{
			if(letter == letters[j]) countLetters[j]++;
		}
	}

	bool isPangram = true;
	for(int j = 0; j < LETTERS_NUMBER; j++)
	{
		if(countLetters[j] == 0) isPangram = false;
	}
	if(isPangram) cout << "Pangram" << endl;
	else cout << "Not pangram" << endl;
	for(int j = 0; j < LETTERS_NUMBER; j++)
	{
		cout << letters[j] << "-" << countLetters[j] << endl;
	}
	system("pause");
	return 0;
}