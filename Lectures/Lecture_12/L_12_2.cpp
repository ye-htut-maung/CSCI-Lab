#include <iostream>
using namespace std;

void greet(string name);

int main() {

    string name_1 = "Tommy";
    string name_2 = "Arthur";

    greet(name_1);
    greet(name_2);

    return 0;
}

void greet(string name) {
    cout << "Hello, " << name << endl;
}