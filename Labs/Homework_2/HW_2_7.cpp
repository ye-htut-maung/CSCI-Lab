#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Enter two integers. The second must be less than half the value of the first: ";
    cin >> num1;
    cin >> num2;

    if (num2 >= num1/2.0) {
        cout << "Invalid input! Goodbye.";
    } else {
        cout << "The numbers from 1 to " << num1 << " that are evenly divisible by " << num2 << " are: ";

        for (int i = 1; i <= num1; i++) {
            if (i % num2 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;

        cout << "The numbers from 1 to " << num1 << " that are not evenly divisible by " << num2 << " are: ";

        for (int i = 1; i <= num1; i++) {
            if (i % num2 != 0) {
                cout << i << " ";
            }
        }
    }

    return 0;
}