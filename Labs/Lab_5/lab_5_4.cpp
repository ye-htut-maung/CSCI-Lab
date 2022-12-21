#include <iostream>
using namespace std;

int main () {

    // Declearation
    int angle_1, angle_2, angle_3;

    //asking to user
    cout << "Enter an angle in degrees: ";
    cin >> angle_1;
    cout << "Enter an angle in degrees: ";
    cin >> angle_2;
    cout << "Enter an angle in degrees: ";
    cin >> angle_3;

    if (angle_1 + angle_2 + angle_3 == 180) {
        cout << "A triangle can be formed from these angles." << endl;
        if (angle_1 == 60 && angle_2 == 60 && angle_3 == 60) {
            cout << "The triangle is an equilateral triangle.";
        } else if (angle_1 == 90 || angle_3 == 90 || angle_2 == 90) {
            cout << "The triangle is a right triangle.";
        } else {
            cout << "The triangle is neither equilateral nor right.";
        }
    } else {
        cout << "A triangle cannot be formed from these angles." << endl;
    }


    return 0;    
}