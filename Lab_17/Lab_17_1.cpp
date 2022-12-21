#include <iostream>
using namespace std;

int thirdDigit(int x);

int main() {

    cout << thirdDigit(347) << " " << thirdDigit(2048) << " " << thirdDigit(560125) << endl;

    return 0;
}

int thirdDigit(int x) {
    if (x < 100) {
        return 0;
    }
    while (x >= 1000) {
        x /= 10;
    }
    return x % 10;
}