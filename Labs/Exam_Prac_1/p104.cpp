#include <iostream>
using namespace std;

int main() {

    int n;
    int temp;
    
    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n * n; col++) {
            if (col <= row) {
                cout << "*";
            } else if (col % n == 0) {
                
            }
        }
    }

    return 0;
}