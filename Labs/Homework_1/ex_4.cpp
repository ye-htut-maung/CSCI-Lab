#include <iostream> 
using namespace std;

int main () {

    // Declaration
    int number;

    // asking user
    cout << "Enter a two- or three-digit number: ";
    cin >> number;

    // if the number is not two or three digit, say you are not playing nicely
    if (number < 10 || number >= 1000) {
        cout << "You are not playing nicely.";
        return 0;
    } else if (number >=10 && number < 100) {
        number = number / 10;
        cout << "The leftmost digit is " <<  number;
    } else {
        number /= 10;
        number =  number % 10;
        cout << "The middle digit is " << number; 
    }
    


    return 0;
}