#include <iostream>
using namespace std;

int main () {

    int num = 10, sum = 0;

    for (int row = 1; row <= 10; row++) {
        sum = 0;
        for (int col = row; col <= row * row; col++) {
            cout << col << " ";
            sum += col;
        }
        cout << "the sum is " << sum << endl;
    }


    return 0;
}