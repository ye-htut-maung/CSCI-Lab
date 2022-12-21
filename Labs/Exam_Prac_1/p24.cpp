#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter :";
    cin >> num;

    for (int row = 1; row <= num; row++) {
        for (int phase = 1; phase <= num; phase++) {
            for (int col = 1; col <= num; col++) {
                if (phase % 2 == 0) {
                    if ((col + row) == num + 1) {
                        cout << "*";
                    } else {
                        cout << "-";
                    }
                } else {
                    if (col == row) {
                        cout << "*";
                    } else {
                        cout << "=";
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}