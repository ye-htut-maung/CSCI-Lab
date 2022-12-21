#include <iostream>
#include <cmath>
using namespace std;
// Checked
int main() {

    int x = 6, y = 0, z = 3;
    double a = 5.0, b= 4.0;
    cout << x << x * a << endl; // line (a) 630.0
    cout << (y % z) << "\nn\n" << z / x << endl; // line (b) 
    // 0
    // n
    // 0

    if ((a < x) && (b > y)) cout << "Hello" << endl; // line (c) Hello
    for (; x <= 9; x++) { cout << x;} // line (d) 6789
    cout << endl;
    cout << sqrt(b) * sqrt(b) / x * z << endl; // line (e) 1.2

    //Checked




    return 0;
}