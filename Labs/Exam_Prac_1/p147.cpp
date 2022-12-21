#include <iostream>
using namespace std;

int main() {
    
    int row = 7;
    int col = 5;

    int row_center = (row / 2) + 1;
    int col_center = (col / 2) + 1;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i == row_center || j == col_center) {
                cout << "O";
            } else {
                cout << "X";
            }
        }
        cout << endl;
    }

    return 0;
}