#include <iostream>
using namespace std;

void lowerCaseString(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
        }
    }
}
void upperCaseString(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
    }
}

void undulatingString(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32;
            }
        } else {
            if (s[i] >= 97 && s[i] <= 122) {
                s[i] -= 32;
            }
        }
    }
}

int main() {

    string s;
    cout << "Enter a word: ";
    cin >> s;

    lowerCaseString(s);

    cout << "Fully lowercase:\n";
    cout << s << endl;

    upperCaseString(s);
    cout << "Fully upper case:\n";
    cout << s << endl;

    undulatingString(s);
    cout << "Undulating case:\n";
    cout << s << endl;


    return 0;
}