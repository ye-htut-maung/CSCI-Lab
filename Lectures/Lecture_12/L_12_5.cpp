#include <iostream>
using namespace std;

string are_two_integer_odd(int num1, int num2);

int main() {

    int num1 = 3;
    int num2 = 9;

    cout << are_two_integer_odd(num1,  num2);

    return 0;
}

string are_two_integer_odd(int num1, int num2) {
    if (num1 % 2 != 0 && num2 % 2 != 0) {
        return "true";
    } else {
        return "false";
    }
}