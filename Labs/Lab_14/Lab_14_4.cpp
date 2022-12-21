#include <iostream>

using namespace std;

int oddLessEven(int num);

int main() {

    cout << oddLessEven(23) << endl; // prints 1
    cout << oddLessEven(1234) << endl; // prints -2
    cout << oddLessEven(777) << endl; // prints 21


    return 0;
}

int oddLessEven(int num) {
    int total_even = 0;
    int total_odd = 0;
    int last_digit;
    int diff;

    while (num > 0) {
        last_digit = num%10;
        if ((last_digit) % 2 == 0) {
            total_even += last_digit;
        } else {
            total_odd += last_digit;
        }

        num /= 10;
    }

    diff = total_odd - total_even;
    return diff;
}