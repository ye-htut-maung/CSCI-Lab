#include <iostream>
using namespace std;

void colSums(int first[][5], int second[], int row, int col) {
    int total = 0;

    for (int j = 0; j < col; ++j) {
        total = 0;
        for (int i = 0; i < row; ++i) {
            total += first[i][j];
        }
        second[j] = total;
    }
}

int main() {
    int first[3][5] = {{9,9,8,1,0},{2,9,8,1,0},{1,1,8,1,0}};
    int second[5];
    colSums(first, second, 3, 5);
    for (int i = 0; i < 5; i++) cout << second[i] << " "; // prints 12 19 24 3 0
    cout << endl;
    return 0;
}
