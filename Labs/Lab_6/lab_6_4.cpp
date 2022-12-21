#include <iostream>
using namespace std;

int main() {

    int number = 0;

    cout << "Enter a positive integer: " << endl; 
    cin >> number;
    while (number < 0) {
        cout << "Invalid input! Try again: " << endl;
        cin >> number;
    }

    cout << "Your number in binary in reverse order is: " << endl;
    while (number > 0) {
        cout << number % 2 << endl;

        number /= 2;
    }


    return 0;
}