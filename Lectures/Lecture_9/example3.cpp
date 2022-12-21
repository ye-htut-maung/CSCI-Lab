#include <iostream>
using namespace std;

int main() {

    for(int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            if (c <= r) {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << "-------------" << endl;
    for (int r = 1; r <= 5; r++) {
        for (int c = 5; c >= 1; c--) {
            if (c > r) {
                cout << " ";
            } else {
                cout << "*";
            }
            
        }
        cout << endl;
    }
    cout << "-------------" << endl;
    for (int r = 1; r <= 5; r++) {
        for (int c = 5; c >= 1; c--) {
            if (c >= r) {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << "----------------" << endl;
    for (int r = 1; r <= 5; r++) {
        for(int c = 1; c <= 5; c++) {
            if (c < r) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}