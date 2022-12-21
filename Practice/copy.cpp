#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream f1;
    ofstream f2;

    string s;
    f1.open("hello.txt");
    f1 >> s;

    f2.open("copy.txt");
    f2 << s;

    f1.close();
    f2.close();



    return 0;
}