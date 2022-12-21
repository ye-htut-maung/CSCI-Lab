#include <iostream>
using namespace std;

int main() {
    //ctemp = (ftemp − 32) / 1.8
    double ctemp, ftemp;
    cout << "Please enter Fahrenheit: ";
    cin >> ftemp;
    
    ctemp = (ftemp - 32) / 1.8;
    cout << "Celsius: " << ctemp;
    return 0;
    
}