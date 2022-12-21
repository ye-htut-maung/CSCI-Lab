#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    while(x <= 0) {
        cout << "Invalid Input. Please enter a positive integer: ";
        cin >> x;
    }
    for (int row = 1; row <= (x+2); row++) {
        for (int col = 1; col <= (x+2); col++) {
            if (row % 2 != 0) {
                if (col % 2 != 0) {
                    cout << "*";
                } else {
                    cout << "-";
                }
            } else {
                cout << "-";
            }
        }
        cout << endl;
    }
    return 0;
}