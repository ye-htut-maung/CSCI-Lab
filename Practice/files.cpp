#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream f;
    f.open("hello.txt");
    f << "Hello I am from the text.";
    f.close();

    ifstream f2;
    f2.open("hello.txt");
    string s;
    getline(f2, s);
    cout << s;

    return 0;
}