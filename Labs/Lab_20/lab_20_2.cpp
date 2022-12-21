#include <iostream>
using namespace std;

int main() {

    int r;
    int arr[100];
    cout << "How many rows?";
    cin >> r;

    if (r > 100) {
        cout << "Invalid input";
        return 0;
    }
    arr[r];

    cout << "Enter " << r << " row lengths: ";
    for (int i = 0; i < r; i++) {
        cin >> arr[i];
        for (int j = 0; j < arr[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }




    return 0;
}