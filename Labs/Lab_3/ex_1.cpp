#include <iostream>
using namespace std;

int main() {

    int x, y;
    
    cout << "Enter a value for x: ";
    cin >> x;
    cout << "Enter a value for y: ";
    cin >> y;

    cout << "The sum of " << x << " and " << y << " is " << x + y << endl;
    cout << y << " subtracted from " << x << " is " << x - y << endl;
    cout << "The product of " << x << " and " << y << " is " << x * y << endl;
    cout << "The average of " << x << " and " << y << " is " << (x + y) / 2.0 << endl;
    cout << "The remainder when " << x << " is divided by " << y << " is " << x % y << endl;
    return 0;  
}