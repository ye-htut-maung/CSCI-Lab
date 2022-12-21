#include <iostream>
using namespace std;

void rowSums(int first[][5], int second[], int row, int col) {
    int row_sum = 0;
    for (int i = 0; i < row; i++) {
        row_sum = 0;
        for (int j = 0; j < col; j++) {
            row_sum += first[i][j];
        }
        second[i] = row_sum;
    }
}

int main() {
    int first[3][5] = {{9,9,8,1,0},{2,9,8,1,0},{1,1,8,1,0}};
    int second[3];
    rowSums(first, second, 3, 5);
    for (int i = 0; i < 3; i++) cout << second[i] << " "; // prints 27 20 11
    cout << endl;
    return 0;
}