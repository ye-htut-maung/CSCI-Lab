#include <iostream>
using namespace std;

int main() {

    int number;
    int sum = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    cout << "The sum of the digits is " << sum;

    return 0;
}