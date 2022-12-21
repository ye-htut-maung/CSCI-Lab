#include <iostream> 
using namespace std;

int main() {

    int number;
    int odd_sum = 0;
    int even_sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number < 0) {
        cout << "Invalid input! Enter a positive integer: ";
        cin >> number;
    }

    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            even_sum += i;
        } else {
            odd_sum += i;
        }
    }

    cout << "The sum of all odd numbers from 1 through " << number << " is " << odd_sum << "." << endl;
    cout << "The sum of all even numbers from 1 through " << number << " is " << even_sum << "." << endl;


    return 0;
}