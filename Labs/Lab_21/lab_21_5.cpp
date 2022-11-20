#include <iostream>
using namespace std;

int main() {

    int x[2][5] = { {-1, -2, 1, -3, 5}, {-5, -6, -4, -7, -8} };
    // operation to find maxRow prints 0
    // because row 0 has two positive entries and row 1 has none

    int count_positive = 0;
    int most_count_positive = 0;
    int row_number = 0;

    for (int i = 0; i < 2; i++) {
        count_positive = 0;
        for (int j = 0; j < 5; j++) {
            if (x[i][j] > 0) {
                count_positive++;
            }
        }

        if (count_positive > most_count_positive) {
            row_number = i;
        }

    }

    cout << "Row Number: " << row_number;


    return 0;
}