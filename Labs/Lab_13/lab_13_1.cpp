#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int side_1, side_2, side_3;
    double p;
    double area;

    // p = (a+b+c)/2
    // Heron's formula
    // area of triangle = sqrt(p*(p-a)*(p-b)*(p-c))

    cout << "Enter lengths of three sides of triangle: " << endl;
    cout << "Side 1: "; 
    cin >> side_1;
    cout << "Side 2: ";
    cin >> side_2;
    cout << "side 3: ";
    cin >> side_3;

    p = (side_1 + side_2 + side_3) / 2;
    area = sqrt(p * (p - side_1) * (p - side_2) * (p - side_3));

    cout << "Area of triangle: " << area << endl; 
    

    return 0; 
}