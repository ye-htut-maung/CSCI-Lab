#include <iostream>
using namespace std;

void rowPositive(int first[][5], bool second[], int row, int col) {
    int rowSum = 0;

    for (int i = 0; i < row; i++) {
        rowSum = 0;
        for (int j = 0; j < col; j++) {
            rowSum += first[i][j];
        }
        if (rowSum < 0) {
            second[i] = false;
        } else {
            second[i] = true;
        }

    }
}

int main() {
    int first[3][5] = {{9,-9,8,1,0},{2,-9,-8,1,0},{1,-1,-8,1,0}};
    bool second[3];
    rowPositive(first, second, 3, 5);
    for (int i = 0; i < 3; i++)
    if (second[i]) cout << "Positive ";
    else cout << "Negative "; // prints Positive Negative Negative
    cout << endl;
    return 0;
}