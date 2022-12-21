#include <iostream>
using namespace std;

int main() {

    int number = 0;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << " FizzBuzz ";
        } else if (i % 3 == 0) {
            cout << " Fizz ";
        } else if (i % 5 == 0) {
            cout << " Buzz ";
        } else {
            cout << " " << i << " ";
        }
    }
    return 0;
}