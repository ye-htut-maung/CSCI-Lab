#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace  std;

void fillArray(int data[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            data[i][j] = rand() % (9 - 1 + 1) + 1;
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

int maxElement(int data[][3], int row, int col) {
    int max = data[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (data[i][j] > max) {
                max = data[i][j];
            }
        }
    }
    return max;
}

int main() {
    srand(time(0));
    int data[3][3] = {0};
    fillArray(data, 3, 3);

    int ans = maxElement(data, 3, 3);
    cout << ans << endl;


    return 0;
}