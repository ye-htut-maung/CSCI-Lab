#include <iostream>
using namespace std; // Checked

int main() {

    int n;
    cout << "What is n?";
    cin >> n;

    for (int r = 1; r <= 2*n - 1; r++) {
        for (int c = 1; c <= n; c++) {
            if (c <= r && c <= 2*n - r) cout << "*";
        }
        cout << endl;
    }


    return 0;
}