#include <iostream>
using namespace std;

void readInput (string word[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> word[i];
    }
}

void getPrefixes(string word[], string prefixes[], int size) {
    for(int i = 0; i < size; i++) {
        if (word[i].size() < 3) {
            prefixes[i] = word[i];
        } else {
            prefixes[i] = word[i].substr(0,3);
        }
    }
}

string concatenateStrings(string prefixes[], int size) {
    string temp = "";
    for (int i = 0; i < size; i++) {
        temp.append(prefixes[i]);
    }
    return temp;
}

int main() {

    string words[5], prefixes[5];
    cout << "Enter five words: ";
    readInput(words, 5);
    getPrefixes(words, prefixes, 5);
    string s = concatenateStrings(prefixes, 5);
    cout << "Concatenated string is " << s << endl;
    return 0;

}