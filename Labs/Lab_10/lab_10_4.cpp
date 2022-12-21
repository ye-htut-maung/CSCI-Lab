#include <iostream>
using namespace std;

int main() {

    int num;
    int error_counter = 0;
    cout << "Enter an integer between 1 and 20: ";
    cin >> num;

    while (num < 1 || num > 20) {
        ++error_counter;
        if(error_counter == 10) {
            break;
        }

        cout << "Out of range. Enter an integer between 1 and 20: ";
        cin >> num;
        
    }

    if (error_counter == 10) {
        num = 10;
    }

    cout << "The cube of your number is " << num * num * num << ".";


    return 0;
}