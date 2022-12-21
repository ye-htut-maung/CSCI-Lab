#include <iostream>
using namespace std;

int main () {

    string name = "";

    cout << "Enter a name and I will repeat it back to you. Type END when you wish to quit." << endl;

    while (name != "END") {
        cin >> name;
        cout << name << endl;
    }
    cout << "I am done.";

    return 0;
}