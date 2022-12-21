#include <iostream>
using namespace std;

int main() {

    int number;
    int square = 0;

    cout << "Enter a number greater than 100: ";
    cin >> number;

    while (number <= 100) {
        cout << "Invalid input! Enter a number greater than 100: ";
        cin >> number;
    }

    

    // while (square < number) {
        
    // }

    for (int i = 1; (i*i) < number; i++) {
        square = i * i;
        cout << i << "  " << square << endl; 
    }

    return 0;
}