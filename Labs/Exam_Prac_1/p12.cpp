#include <iostream>
using namespace std;
//Checked
int main() {
    int n;
    cout <<"Enter the number of triangle: ";
    cin >> n;
    for (int time = 1; time <= n; time++) {
        for (int row = 1; row <= n+1; row++) {
            for (int col = 1; col <= n; col++) {
                if (row == n+1) cout << "-";
                else if (col <= row && time % 2 != 0) cout << "X";
                else if (col >= row && time % 2 == 0) cout << "X";
                else cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}