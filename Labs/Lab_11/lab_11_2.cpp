#include <iostream>
using namespace std;

int main() {
    
    int num;

    cout << "Enter an odd integer between 5 and 25: ";
    cin >> num;

    while (num < 5 || num > 25) {
        cout << "Invalid input! Enter an odd integer between 5 and 25: ";
        cin >> num;
    }

    for (int row = 1; row <= num; row += 2) {
        for (int col = 1; col <= num; col += 2) {
            cout << row * col << " ";
        }
        cout << endl;
    }

    return 0;
}