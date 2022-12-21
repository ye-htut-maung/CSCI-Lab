#include <iostream>
using namespace std;

int main() {

    int row = 6;
    int col = 6;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i % 2 != 0) {
                if (j % 2 != 0) {
                    cout << "X ";
                } else {
                    cout << "O ";
                }
            } else {
                if (j % 2 == 0) {
                    cout << "X ";
                } else {
                    cout << "O ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}