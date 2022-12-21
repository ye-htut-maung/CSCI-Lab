#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArray(int data[][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            data[i][j] = rand() % (9 - 1 + 1) + 1;
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

int sumCol(int data[][5], int row, int col, int colSum) {
    int total = 0;
    for (int i = 0; i < row; i++) {
        total += data[i][colSum];
    }
    return total;
}


int main() {
    srand(time(0));
    int data[5][5] = {0};

    fillArray(data, 5, 5);

    int sum = sumCol(data, 5, 5, 2);
    cout << endl << sum << endl;



    return 0;
}