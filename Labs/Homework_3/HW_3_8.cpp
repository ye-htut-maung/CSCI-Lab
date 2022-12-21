#include <iostream>
using namespace std;

// string changeThrees(string str_num);
int changeThrees(int num);

int main() {

    int number;

    cout << "Enter a number greater than or equal to 3: ";
    cin >> number;

    while (number < 3) {
        cout << "Invalid input. Enter a number greater than or equal to 3: ";
        cin >> number;
    }



    // string str_num = to_string(number);

    // string modifiedNumber = changeThrees(str_num);

    cout << changeThrees(number) << endl;
    cout << "I don't like numbers with 3's in them.";
    return 0;
}

int changeThrees(int n) {
    int t = n % 10;
    if (t == 3) {
        t = 2;
        cout << "removed a 3" << endl;
    }
    if (n < 10) return t;
    else return changeThrees(n/10) * 10 + t;
}


// string changeThrees(string str_num) {
    
//     for (int i = 0; i < str_num.length(); i++) {
//         if (str_num[i] == '3') {
//             str_num[i] = '2';
//         }
//     }

//     return str_num;

// }

// int evenDigitChange(int n) {
//     int t = n % 10;
//     if (t % 2 == 0) t = t + 1;
//     if (n < 10) return t;
//     else return evenDigitChange(n/10) * 10 + t;
// } 