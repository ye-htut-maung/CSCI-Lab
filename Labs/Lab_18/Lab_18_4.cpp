#include <iostream>
using namespace std;

int sumDigits(int num);

int main() {

    cout << sumDigits(912) << endl; // prints 12
    cout << sumDigits(3275) << endl; // prints 17

    return 0;
}

int sumDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sumDigits(num / 10);
    }
}