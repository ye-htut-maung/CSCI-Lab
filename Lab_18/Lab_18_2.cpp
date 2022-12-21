#include <iostream>
#include <cmath>
using namespace std;

int twoPart(int num) {
    int expo = 0;
    while (pow(2, expo) < num) {
        expo++;
    }

    int largest;

    while (true) {
        largest = pow(2, expo);

        if (num % largest == 0) {
            return largest;
        }
        expo--;

    }

    return pow(2, expo);
}

int main() {

    cout << twoPart(16) << endl; // prints 16
    cout << twoPart(666) << endl; // prints 2
    cout << twoPart(777) << endl; // prints 1

    return 0;
}