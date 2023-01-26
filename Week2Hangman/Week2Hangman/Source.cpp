// CS 201 WK 2 Hangman

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("words.txt");
		if (!inFile.is_open()) {
			cout << "File does not open\n";
			exit(0);
		}
		string word;
		vector<string> inputList;
		int randomPick;
		while (inFile >> word) {
			inputList.push_back(word);
		}
		for (int i = 0; i < inputList.size(); i++)
			cout << inputList[i] << endl;
		randomPick = rand() % (inputList.size());
		cout << inputList[randomPick] << endl;
	inFile.close();
}