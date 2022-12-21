#include <iostream>
using namespace std;

int main() {

    int even_counter = 0; 
    int odd_counter = 0;
    int number = -1;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
       
        if (number % 2 == 0) {
            ++even_counter;
        } else {
            ++odd_counter;
        }
         
        cout << "Enter a number: ";
        cin >> number;

    }

    cout << "Number of even integers: " << even_counter << endl;
    cout << "Number of odd integers: " << odd_counter;



    return 0;
}

