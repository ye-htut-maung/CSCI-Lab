#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f;

    f.open("out.txt");

    if (!f.is_open()) {
        cout << "Open again" << endl;
    }

    f << "Write smth" << endl;

    f.close();


    return 0;
}
