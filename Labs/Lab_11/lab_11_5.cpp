#include <iostream>
using namespace std;

int main() {
    
    int user_row, user_col;

    cout << "Enter number of rows between 2 and 10: ";
    cin >> user_row;

    while (user_row < 2 || user_row > 10) {
        cout << "Invalid input. Enter number of rows between 2 and 10: ";
        cin >> user_row;
    } 

    cout << "Enter number of cols between 2 and 10: ";
    cin >> user_col;

    while (user_col < 2 || user_col > 10) {
        cout << "Invalid input. Enter number of cols between 2 and 10: ";
        cin >> user_col;
    } 

    for (int row = 1; row <= user_row; row++) {
        for (int col = 1; col <= user_col; col++) {
            cout << col << "x" << row << "=" << col * row << " ";
        }
        cout << endl;
    }


    return 0;
}