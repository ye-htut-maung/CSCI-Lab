#include <iostream>
#include <cmath>
using namespace std;
// Checked

int main() {

    int x = 3, y = 1, z = 4;
    double a = 4.0, b= 5.0;
    cout << x << x * a << endl; // line (a) 312.0
    cout << (z % y) << "\n" << z / x << endl; // line (b)
    // 0
    // 1
    if ((a < z) && (b > y)) cout << "Hello" << endl; // line (c)
    for (; x <= 9; x++) cout << "x"; // line (d) xxxxxxx
    cout << endl;
    cout << sqrt(a) / z << endl; // line (e) 0.5

    

    return 0;
}