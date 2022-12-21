#include <iostream>
using namespace std;

int main() {

    int num = 6;

    for (int row = 1; row <= num; row++) {
        for (int col = 1; col <= num; col++) {
            cout << row * col << " ";
        }
        cout << endl;
    }

    return 0;
}