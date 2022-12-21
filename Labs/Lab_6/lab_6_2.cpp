#include <iostream>
using namespace std;

int main () {

    int number = 0;

    cout << "Enter a number and I will tell you if it is even or odd. Enter a negative number to stop: " << endl;
    cin >> number;
    while (number >= 0) {
        if (number % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
        cin >> number;
    }
    cout << "Goodbye.";
    return 0;
}