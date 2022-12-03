#include <iostream>
using namespace std;

string toLower(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
    }
    return s;
}

int main() {

    string s = "HELLO123 saDD";
    string s1 = toLower(s);
    cout << s1 << endl;

    return 0;
}