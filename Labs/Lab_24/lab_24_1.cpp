#include <iostream>
using namespace std;

void printReserveString(string name) {
    for (int i = name.size()-1; i >= 0; i--) {
        cout << name[i];
    }
    cout << endl;
}

void reserveString(string &name) {
    string temp = name;
    int j = 0;
    for (int i = name.size() - 1; i >= 0; i--) {
        name[j] = temp[i];
        ++j;
    }
}

int main() {

    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "String in reverse:\n";
    printReserveString(name);

    cout << "Current value of name:\n";
    cout << name << endl;

    reserveString(name);
    cout << "Current value of name:\n";
    cout << name << endl;
    


    return 0;
}