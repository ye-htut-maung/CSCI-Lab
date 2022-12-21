#include <iostream>
using namespace std;

int add1ToEvenDigit(int num) {
    int e = num % 10;
    if (e % 2 == 0) e += 1;
    if (num < 10) return e;
    else {
        return add1ToEvenDigit(num / 10) * 10 + e;
    }
}

int main() {

    int num = 1234;

    cout << add1ToEvenDigit(num);


    return 0;
}