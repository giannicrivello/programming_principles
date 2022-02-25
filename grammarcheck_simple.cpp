//given a string of repeated words. Return a string with only single occurences of the word.
//

#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;


class GrammarCheck {
	vector<string> words;
	vector<string> bleepwords;
public:
	void Reduce();
	void Moderate();
};

void GrammarCheck::Reduce(){
	//this function takes out repeating words
	cout << "Please provide text you wish to operate on .. \n";
	for (string ls; cin >> ls;){
		words.push_back(ls); //push into vector words from out read in prompt
	}
	for (int i=0; i<words.size(); i++) {
		if(i==0 || words[i-1] != words[i]) {
			cout << words[i] << "\n";
		}
	}
}

void GrammarCheck::Moderate(){
	bleepwords.push_back("fuck");
	cout << "Please provide text you wish to operate on .. \n";
	for (string ls; cin >> ls;){
		words.push_back(ls);
	}
	for (int i=0; i<bleepwords.size(); i++) {
		string bleepword = bleepwords[i];
		for (int j=0; j < words.size(); j++) {

			if(words[j] == bleepword) {
				words[j] = "BLEEP";
			}
			cout << words[j] << "\n";
		}
	}
}
int main(){
	GrammarCheck GC;
	char choice;
	cout << "Do you want to Reduce or Moderate? (R/M)";
	cin >> choice;
	if(choice == 'R') {
		GC.Reduce();
	}
	else if (choice == 'M') {
		GC.Moderate();
	}
	else {
		cout << "Please Provide Value R (Reduce) or M (Moderate)";
	}
}

