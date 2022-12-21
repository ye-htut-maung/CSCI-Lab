#include <iostream>
using namespace std;

void colPositive(int first[][5], bool second[], int row, int col) {
    int col_product = 1;

    for (int i = 0; i < col; i++) {
        col_product = 1;
        for (int j = 0; j < row; j++) {
            col_product *= first[j][i];
        }
        if (col_product <= 0) {
            second[i] = false;
        } else {
            second[i] = true;
        }
    }
}

int main() {
    int first[3][5] = {{9,-9,8,1,0},{2,-9,-8,1,0},{1,-1,-8,1,0}};
    bool second[5];
    colPositive(first, second, 3, 5);
    for (int i = 0; i < 5; i++)
    if (second[i]) cout << "Positive ";
    else cout << "Not "; // prints Positive Not Positive Positive Not
    cout << endl;
    return 0;
}
 