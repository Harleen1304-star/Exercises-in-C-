/* Programming Exercises */

#include <iostream>
using namespace std;

bool isVowel(char vowel);

int main() {
	
	char name;

	cout << "Give me a character " << endl;

	cin >> name;

	bool result = isVowel(name);

	if (result)
		cout << "The character is not vowel" << endl;
	else
		cout << "The character is a vowel" << endl;
	
}

bool isVowel(char vowel) {

	if (vowel != 'a' || vowel != 'e' || vowel != 'i' || vowel != 'o' || vowel != 'u') {
		return false;
	}
	else
		return true;
}