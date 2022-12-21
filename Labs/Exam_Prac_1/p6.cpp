#include <iostream>
using namespace std;// Checked

int main() {

    int n;
    cout << "What is n?";
    cin >> n;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= 2*n - 1; c++) {
            if (r > c || c > 2*n - r) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }


    return 0;
}