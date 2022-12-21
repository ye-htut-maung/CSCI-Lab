#include <iostream>
using namespace std;

int main () {

    double base = 8.5;
    double height = 11;

    double area = 0;
    double perimeter = 0;

    area = base * height;
    perimeter = 2 * (base + height);

    // The area of letter-size sheet of paper is 93.5
    //The perimeter of a letter-size sheet of paper is 39

    cout << "The area of letter-size sheet of paper is " << area << endl;
    cout << "The perimeter of a letter-size sheet of paper is " << perimeter << endl;


    return 0;
}