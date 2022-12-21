#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {

    ifstream f1;
    ofstream f2;

    f1.open(argv[1]);
    f2.open(argv[2]);

    while (!f1.eof()) {
        char x = f1.get();
        f2 << x;
    }

    f1.close();
    f2.close();

    return 0;
}