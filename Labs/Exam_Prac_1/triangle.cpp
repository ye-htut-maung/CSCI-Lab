#include <iostream>
using namespace std;

int main() {

    int num = 5;

    // cout << "upleft triangle" << endl;

    // for (int row = 1; row <= num; row++) {
    //     for (int col = 1; col <= num; col++) {
    //         if (col <= row) {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // cout << "upright triangle" << endl;

    // for (int row = 1; row <= num; row++) {
    //     for (int col = 1; col <= num; col++) {
    //         if ((row + col) >= (num + 1)) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << "downleft triangle" << endl;

    // for (int row = 1; row <= num; row++) {
    //     for (int col = 1; col <= num; col++) {
    //         if (row <= col) {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << "downright triangle" << endl;

    // for (int row = 1; row <= num; row++) {
    //     for (int col = 1; col <= num; col++) {
    //         if (row <= col) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // cout << "paramid" << endl;

    // for (int row = 1; row <= num; row++) {
    //     for (int col = 1; col <= num; col++) {

    //     }
    // }

    cout << "Decreasing" << endl;

    for (int i = 1; i <= num; i++) {
        for (int j = i+1; j <= num; j++) {
            cout << "-";
        }
        for (int k = 1; k < i; k++) {
            cout << "*";
        }
        for (int l = 1; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}