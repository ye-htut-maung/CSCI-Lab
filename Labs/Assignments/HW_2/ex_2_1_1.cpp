#include<iostream>
using namespace std;

int main() {

    int number = 0;
    cout << "Please enter a number: ";

    cin >> number;
   
    if (number % 7 == 0) {
        cout << "It is divisible by 7.";
    } else {
        cout << "It is not divisible by 7.";
    }
    
    return 0;
}