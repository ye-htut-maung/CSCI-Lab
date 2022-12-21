#include <iostream>
using namespace std;

int main() {
    
    int num, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) return 0;

    for (int row = 1; row <= num; row++) {
        sum = 0;
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
            sum += col;
        }
        cout << "the sum is " << sum << endl;
    }


    return 0;
}