#include <iostream>
using namespace std;
 
int main () {

    int num;
    cout << "enter ";
    cin >> num;

    for (int big_square = num; big_square >= 1; big_square -= 2) {
        for (int row = 1; row <= big_square; row++) {
            for (int col=1; col <= num; col++) {
                if (num - big_square >= col) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            }
            cout << endl;
        }
    } 

    return 0;
}