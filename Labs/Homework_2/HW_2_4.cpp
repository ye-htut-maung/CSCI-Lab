#include <iostream>
using namespace std;

int main() {

    int number;
    int even_counter = 0, odd_counter = 0;
    int single_digit;
    
    cout << "Enter a positive integer with six digits or fewer: ";
    cin >> number;

    if (number > 999999) {
        cout << "Invalid input! Goodbye.";
    } else {
        while (number > 0) {
            single_digit = number % 10;

            if (single_digit % 2 == 0) {
                even_counter++;
            } else {
                odd_counter++;
            }

            number /= 10;
        }

        for (int i = 0; i < even_counter; i++) {
            cout << "E";
        }
        cout << endl;
        for (int i = 0; i < odd_counter; i++) {
            cout << "O";
        }
       
    }

    return 0;
}