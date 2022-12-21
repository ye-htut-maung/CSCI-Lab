#include <iostream>
using namespace std;

int main() {

    int num_greater_10;

    cout << "Enter positive integer greater than 10: ";
    cin >> num_greater_10;

    while (num_greater_10 <= 10){
        cout << "Invalid input! Try again: ";
        cin >> num_greater_10;
    }

    for (int i = 1; i <= num_greater_10; i++) {
        if (i % 3 == 0 && i % 4 == 0) {
            cout << "FuzzyCat" << " ";
        } else if (i % 3 == 0) {
            cout << "Fuzzy" << " ";
        } else if (i % 4 == 0) {
            cout << "Cat" << " ";
        } else {
            cout << i << " ";
        }
    }

    return 0;
}