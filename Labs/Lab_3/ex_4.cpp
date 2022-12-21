#include <iostream>
using namespace std;
// Enter your name: Dave
// Enter your height in inches: 61
// Hi Dave.  You are 154.94 centimeters tall.

int main () {

    string name = "";
    int height_inch = 0;
    double height_centi = 0;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your height in inches: ";
    cin >> height_inch;

    height_centi = height_inch * 2.54;
    cout << "Hi " << name << ". You are " << height_centi << " centimeters tall.";




    return 0;
}