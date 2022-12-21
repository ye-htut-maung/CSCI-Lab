#include <iostream>
using namespace std;

int main() {

    int number = 0, single_digit = 0;
    int total = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number < 0) {
        cout << "Invalid input! Try again: ";
        cin >> number;
    }
    while (number > 0) {
         single_digit = number % 10;
        // cout << endl << "single digit: " << single_digit << endl;
        if (single_digit % 2 != 0) {
            total += single_digit;
        }
        //cout << endl << "Total: " << total << endl;

        number /= 10;
    }
    cout << "The sum of the odd digits in the number is " << total;

    return 0;
}