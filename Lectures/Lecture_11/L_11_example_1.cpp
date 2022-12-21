#include <iostream>
using namespace std;

int main() {

    int num, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;



    for (int row = 1; row <= num; row++) {
        for (int col = 1; col <= row; col++) {
                cout << col << " ";
                sum += col;
        }
        cout << "the sum is " << sum << endl;
        sum = 0;
    }

    return 0;
}