#include <iostream>
using namespace std;

int main () {

    int row = 3;
    int col = 3;
    int largestSum;
    int totalRow = 0;
    int largestRow = 0;

    int numbers[row][col] = {{9,9,1}, {9,5,6}, {7,8,9}};

    for (int i = 0; i < col; i++) {
        largestSum += numbers[0][i];
    }

    for (int i = 0; i < row; i++) {
        totalRow = 0;
        for (int j = 0; j < col; j++) {
            totalRow += numbers[i][j];
        }
        if (totalRow > largestSum) {
            largestSum = totalRow;
            largestRow = i;
        }
    }

    cout << "Largest Row Sum: " << largestSum << endl;
    cout << "Largest Row: " << largestRow << endl;



    return 0;
}