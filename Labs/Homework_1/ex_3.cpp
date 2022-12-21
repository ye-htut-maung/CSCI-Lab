#include <iostream>
using namespace std;

int main() {

    // Declaration
    double fTemp, cTemp;

    // asking temperature in Fahrenheit
    cout << "Enter your temperature in Fahrenheit: ";
    cin >> fTemp;

    // converting Fahrenheit to Celsius
    cTemp = (fTemp - 32) * 5/9;

    // printing temperature in Celsius
    cout << "Your temperature in Celsius is " << cTemp << endl;
    
    // printing have fever or not
    if (cTemp > 37) {
        cout << "You have a fever. Drink lots of liquids and go to bed.";
    } else {
        cout << "You don't have a fever. Go study.";
    }
    return 0;
}