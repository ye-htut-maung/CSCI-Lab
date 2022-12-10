#include <iostream>
using namespace std;

void bookEndString(string &s, int num) {
    string firstChar = s.substr(0, 1);
    string lastChar = s.substr(s.size() - 1, 1);

    for (int i = 0; i < num; i++) {
        if (firstChar == lastChar) {
            s.insert(0, firstChar);
            s.insert(s.size(), lastChar);
        } else {
            s.insert(0, "Z");
            s.insert(s.size(), "Z");
        }
    }


}

int main() {
    string s;
    int num;
    cout << "Enter a word with at least three letters: ";
    cin >> s;
    while(s.size() < 3){
        cout << "Invalid input! Enter a word with at least three letters: ";
        cin >> s;
    }
    cout << "Enter a number greater than 0: ";
    cin >> num;
    while(num <= 0) {
        cout << "Invalid input!  Enter a number greater than 0: ";
        cin >> num;
    }
    bookEndString(s, num);
    cout << "The modified word is: " << s << endl;
    return 0;
 }