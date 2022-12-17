#include <iostream>
using namespace std;

void printStripedSquare(char a, char b) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i % 2 == 0) {
                cout << a;
            } else {
                cout << b;
            }
        }
        cout << endl;
    }
}

int main() {

    char a, b;
    int x, y;
    cout << "Enter two characters, first must precede second in alphabetical order: ";
    cin >> a >> b;
    x = (int) a;
    y = (int) b;

    while (x > y) {
        cout << "Invalid Input! First character must precede second in alphabetical order!";
        cin >> a >> b;
        x = (int) a;
        y = (int) b;
    }

    printStripedSquare(a, b);

    return 0;
}