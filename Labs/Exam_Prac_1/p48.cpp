#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter ";
    cin >> num;

    for (int big_square = num; big_square >= 1; big_square--) {
        for (int row = big_square; row >= 1; row--) {
            for (int col = num; col >= 1; col--) {
                if (col <= big_square) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }


    return 0;
}