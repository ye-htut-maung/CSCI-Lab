#include <iostream>
using namespace std;

int main() {

    int x = 7;

    for (int row = 1; row <= x; row++) {
        for (int col = 1; col <= x; col++) {
            if (row == col || row+col == x+1) {
                cout << "O";
            } else {
                cout << "X";
            }
        }
        cout << endl;
    }

    return 0;
}