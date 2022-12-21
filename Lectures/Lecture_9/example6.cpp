#include <iostream>
using namespace std;

int main() {

    int num = 9;
    int center = (num / 2) + 1;
    int rev_col = num;

    for (int row = 1; row <= num; row++) {
        for (int col = 1; col <= num; col++) {
            if (row == center && col == center) {
                cout << "*";
                rev_col--;
            } else if (row == col) {
                cout << "*";
                
            } else if (col == rev_col) {
                cout << "*";
                rev_col--;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}