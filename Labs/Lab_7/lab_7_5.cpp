#include <iostream>
using namespace std;

int main() {
    
    int single_digit_counter = 0, two_digit_counter = 0, three_digit_counter = 0;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        if (number < 10) {
            ++single_digit_counter;
        } else if (number < 100) {
            ++two_digit_counter;
        } else {
            ++three_digit_counter;
        }
        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "Number of single-digit integers: " << single_digit_counter << endl;
    cout << "Number of two-digit integers: " << two_digit_counter << endl;
    cout << "Number of three-digit integers: " << three_digit_counter;

    return 0;
}