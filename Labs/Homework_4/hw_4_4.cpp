#include <iostream>
using namespace std;

void swapFirstLetters(string &fName, string&lName) {
    string fChar = fName.substr(0,1);
    string lChar = lName.substr(0,1);

    fName.replace(0, 1, lChar);
    lName.replace(0, 1, fChar);
}

int longestString(string fName, string lName) {
    if (fName.size() > lName.size()) {
        cout << fName << " is the longest string." << endl;
        return fName.size();
    } else {
        cout << lName << " is the longest string" << endl;
        return lName.size();
    }
}

void repeatHello(int length) {
    for (int i = 0; i < length; i++) {
        cout << "Hello";
    }
}

int main() {
    string fName, lName;
    int length;
    cout << "Please enter your first name: ";
    cin >> fName;
    cout << "Please enter your last name: ";
    cin >> lName;

    swapFirstLetters(fName, lName);
    cout << "Your new first name is " << fName << endl;
    cout << "Your new last name is " << lName << endl;
    length = longestString(fName, lName); // this function prints the longest string from inside the function
    repeatHello(length);
    return 0;

}