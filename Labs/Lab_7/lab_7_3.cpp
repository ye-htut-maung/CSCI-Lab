#include <iostream>
using namespace std;

int main() {

    int number;
    int digit;
    bool is_5 = false;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number < 0) {
        cout << "Bad input! Try again: ";
        cin >> number;
    }
    while (number > 0) {
        digit = number % 10;
        if (digit == 5) {
            is_5 = true;
            break;
        }
        number /= 10;
    }

    if (is_5) {
        cout << "Number contains a 5.";
    } else {
        cout << "Number does not contain a 5.";
    }
    return 0;
}