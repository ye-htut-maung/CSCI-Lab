#include <iostream>
using namespace std;

int main() {

    int number;
    int factor = 1;

    cout << "Enter a positive integer: " << endl;
    cin >> number;
    
    while (number < 0) {
        cout << "Invalid input! Try again: " << endl;
        cin >> number;
    }

    cout << "The factors of " << number << " are ";

    while (factor <= number) {
        if (number % factor == 0) {
            cout << factor << " ";
        }
        factor += 1;
    }

    return 0;
}