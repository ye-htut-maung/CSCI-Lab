#include <iostream>
using namespace std;

int main() {

    int numbers[5];
    int shiftedNumbers[5];
    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    cout << "Shifted array: ";

    for (int i = 0; i < 5; i++) {

        if (i-1 < 0) {
            shiftedNumbers[i] = numbers[4];
        } else {
            shiftedNumbers[i] = numbers[i-1];
        }

        cout << shiftedNumbers[i] << " ";
    }

    

    return 0;
}