#include <iostream>
using namespace std;

int biggestDigit(int num) {
    int digit_arr[10] = {};
    int iterator = 0;

    while (num > 0) {
        digit_arr[iterator] = num % 10;
        iterator++;
        num /= 10;
    }

    // cout << digit_arr[0] << endl;

    int arr_len = sizeof(digit_arr) / sizeof(digit_arr[0]);
    int largest = digit_arr[0];

    for (int i = 0; i < arr_len; i ++) {
        if (digit_arr[i] > largest) {
            largest = digit_arr[i];
        }
    }

    return largest;

}

int main() {
    cout << biggestDigit(29) << endl; // prints 9
    cout << biggestDigit(31415) << endl; // prints 5
    cout << biggestDigit(7) << endl; // prints 7
    return 0;
}