#include <iostream>
using namespace std;

void toLower(string &a) {
    for (int i = 0; i < a.size(); i++) {
        if(a[i] >= 65 && a[i] <= 90) {
            a[i] += 32;
        }
    }
}


int main() {
    string s = "HELLO";
    toLower(s);
    cout << s << endl;
    return 0;
} 