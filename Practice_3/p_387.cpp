#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter integers for r and c (at most 100): ";
    cin >> r >> c;

    while (r <= 0  || r > 100 || c <= 0 || r > 100) {
        cout << "Invalid! Enter integers for r and c (at most 100): ";
        cin >> r >> c;
    }

    int arr[100][100] ;

    cout << "Enter " << r << " rows of " << c << " integers: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    } 

    int max_col[100] ;

    cout << "The maximum entries in the columns are: ";
    for (int j = 0; j < c; j++) {
        max_col[j] = arr[0][j];
        for (int i = 0; i < r; i++) {
            if (arr[i][j] > max_col[j]) {
                max_col[j] = arr[i][j];
            }
        }
        cout << max_col[j] << " ";
    }

    cout << endl;

    int min_all = max_col[0];

    for (int i = 0; i < c; i++) {
        if (max_col[i] < min_all) {
            min_all = max_col[i];
        }
    }

    cout << "The smallest of the printed maximum entries is: " << min_all;
 

    return 0;
}