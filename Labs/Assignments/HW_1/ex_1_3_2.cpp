#include <iostream>
using namespace std;

int main() {
    //ctemp = (ftemp − 32) / 1.8
    double ftemp;
    cout << "Please enter Fahrenheit: ";
    cin >> ftemp;
    cout << "Celsius: " << (ftemp - 32) / 1.8;
    return 0;
    
}