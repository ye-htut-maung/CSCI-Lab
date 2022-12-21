#include <iostream>
using namespace std;

int removeOddDigits(int num);

int main() {

    cout << removeOddDigits(792) << endl; // prints 2
    cout << removeOddDigits(37) << endl; // prints 0
    cout << removeOddDigits(222) << endl; // prints 222

    return 0;
}

int removeOddDigits(int num) {
    if (num == 0) {
        return 0;
    }
    int digit = num % 10;
    if (digit % 2 == 1) {
        return removeOddDigits(num/10);
    }
    return removeOddDigits(num / 10) * 10 + digit;
    
}