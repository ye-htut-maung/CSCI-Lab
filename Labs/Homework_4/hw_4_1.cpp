#include <iostream>
using namespace std;

int main() {

    int odd_num;
    cout << "Enter an odd integer between 7 and 19: ";
    cin >> odd_num;

    while(odd_num % 2 == 0 || odd_num < 7 || odd_num > 19) {
        cout << "Invalid Input. Enter an odd integer between 7 and 19: ";
        cin >> odd_num;
    }

    int character = ((int) 'A') - 1;

    for (int i = 0; i < odd_num; i++) {
        for (int j = odd_num-1; j >= 0 ; j--) {
            if (i == 0 || i == odd_num-1 || j == 0 || j == odd_num-1) {
                cout << "*";
            } 
            else {
                if (j <= i){
                    cout << (char)character;
                } else {
                    cout << " ";
                }
            }
        }
        character++;
        cout <<endl;
    }

    return 0;
}