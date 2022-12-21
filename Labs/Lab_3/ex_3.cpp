#include <iostream>
using namespace std;

int main () {

    int x;
    cout << "Enter a four-digit number: ";
    cin >> x;

    cout << "Your number in reverse is ";
    cout << x % 10;
    x = x / 10;
    cout << x % 10;
    x = x / 10;
    cout << x % 10;
    x = x / 10;
    cout << x;

    // cout << x % 10 << (x / 10) % 10 << (x / 100) % 10 << (x / 1000) % 10;
    
    // // Alternative Solution
    // string number = "";
    // string reverse_number = "";
   
    // cout << "Enter a four-digit number: ";
    // cin >> number;

    // for (int i = number.length() - 1; i >= 0; --i) {
    //     reverse_number += number[i];
    // }

    // cout << reverse_number;

    /* Enter a four-digit number:  3412
    Your number in reverse is 2143 */

    return 0;

}