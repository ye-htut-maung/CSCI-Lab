#include <iostream>
using namespace std;

int main() {

    // Declaration
    int num1, num2;
    int quotient, remainder;
    double pricise_result;

    // asking two integers
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // finding quotient, remainder and pricise result
    quotient = num1 / num2;
    remainder = num1 % num2;
    pricise_result = (double) num1 / num2;

    // printing to user
    cout << "When " << num1 << " is divided by " << num2 << ", the quotient is " << quotient << " and the remainder is " << remainder << endl;
    cout << "The precise result is " << pricise_result;



    return 0;
}