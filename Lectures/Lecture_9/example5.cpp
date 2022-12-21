#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter odd number: ";
    cin >> num;

    int center = (num/2)+1;
    int below = (num/2);

    for (int row = 1; row <=num; row++) {
        if (row <= center)
        for (int col = 1; col <=center; col++) {
            if(col <= row) {
                cout << "*";
            }
        } else {
            
            for (int col_2 = below; col_2 >= 1; col_2--) {
                cout << "*";
            }
            below--;
        }
        cout << endl;
    }

    return 0;
}