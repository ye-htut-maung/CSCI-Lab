#include <iostream>
using namespace std;

int main() {

    float x, y, z;

    cout << "Enter three integers: ";
    cin >> x;
    cin >> y;
    cin >> z;

    // cout << "Enter first integer: ";
    // cin >> x;
    // cout << "Enter second integer: ";
    // cin >> y;
    // cout << "Enter third integer: ";
    // cin >> z;

    //  3x
    // 3x+y
    // (x+y)/7
    // (3x+y)/(z+2)

    cout << "3 * " << x << " = " << 3 * x << endl;
    cout << "3 * " << x << " + " << y << " = " << 3 * x + y << endl;
    cout << "(" << x << " + " << y << ") / 7 = " << (x+y) / 7 << endl;  
    cout << "(3 * " << x << " + " << y << ") / (" << z << " + 2) = " << (3*x + y) / (z + 2); 
    return 0;
}