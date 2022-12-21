#include <iostream>
using namespace std;

int main () {

    int number;
    int single_digit;
    int first_digit;
    int last_digit;

    cout << "Enter a positive integer with between two and five digits:";
    cin >> number;

    while (number < 10 || number > 99999) {
        cout << "Invalid input! Enter a positive integer with five digits or fewer: ";
        cin >> number;
    }

    if (number < 100) {
        first_digit = number / 10;
        last_digit = number % 10;
    } else if (number < 1000) {
        first_digit = number / 100;
        last_digit = number % 10;
    } else if (number < 10000) {
        first_digit = number / 1000;
        last_digit = number % 10;
    } else {
        first_digit = number / 10000;
        last_digit = number % 10;
    }

    cout << "The first digit of your input is " << first_digit << " and the last digit of your input is " << last_digit << ".";

    return 0;
}