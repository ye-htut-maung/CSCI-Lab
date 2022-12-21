#include <iostream>
using namespace std;

int main() {

    // Declaration
    int number;

    // -----
    cout << "Enter a number between 1 and 100: ";
    cin >> number;

    while (number < 1 || number > 100) {
        cout << "Invalid input! Enter a number between 1 and 100: ";
        cin >> number;
    }
    
    cout << "The first 20 multiples of 3 are ";

    for (int i = 1; i <= 20; i++) {
        cout << number * i << " ";
    }

    return 0;
}