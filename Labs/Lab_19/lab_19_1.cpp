#include <iostream>
using namespace std;

int main() {

    int numbers[5];
    int sum = 0;

    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 1) {
            cout << numbers[i] << " ";
        }
        sum += numbers[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl << "Sum of all numbers: " << sum << endl;


    return 0;
}