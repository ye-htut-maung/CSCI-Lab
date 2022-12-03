#include <iostream>
using namespace std;

char toLower(char c) {
    if (c >= 65 && c <= 90) {
        c += 32;
    }
    return c;
}

int main() {

    string s = "HELLO";
    for(int i = 0; i < 5; i++){
        s[i] = toLower(s[i]);
    }   
    cout << s << endl; 

    return 0;
}