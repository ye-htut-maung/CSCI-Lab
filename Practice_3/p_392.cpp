#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // 1
    // ofstream f;
    // f.open("out.txt");
    // f << "HELLO" << endl;
    // f.close();

    // 2
    // srand(time(0));
    // cout << (char) (rand() % (90 - 65 + 1) + 65);

    // 3
    // string s;
    // cout << "Enter a line: ";
    // cin >> s;
    // if (s.find("Fred") >= 0 && s.find("Fred") < s.size()) {
    //     cout << "NO" <<  endl;
    // }

    // 4
    // string s= "abcdef";
    // cout << s.substr(0, 4);

    int p = 3;
    int q = 9;
    int temp = p;
    p = q;
    q = temp;
    cout << p << q;


    return 0;
}