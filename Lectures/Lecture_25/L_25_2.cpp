#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream f;

    f.open("out.txt");
    string s;

    f >> s;

    cout << s;

    f.close();


    return 0;
}