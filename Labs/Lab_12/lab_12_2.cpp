// need to ask about inclusive and exclusive
// If the user enters an invalid input, say "Goodbye" and end the program. or Try again:?

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    int num1, num2;
    int greater, smaller;
    int diff;
    int rand_num;

    cout << "Enter two positive integers with a difference of at least 10: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        diff = num1 - num2;
        greater = num1;
        smaller = num2;
    } else {
        diff = num2 - num1;
        greater = num2;
        smaller = num1;
    }

    while (num1 <= 0 || num2 <= 0 || diff < 10) {
        cout << "Invalid input!  Try again: ";
        cin >> num1 >> num2;
        if (num1 > num2) {
        diff = num1 - num2;
        greater = num1;
        smaller = num2;
    } else {
        diff = num2 - num1;
        greater = num2;
        smaller = num1;
    }
    }

    srand(time(0));
    rand_num = smaller + ((rand() % (greater - smaller + 1)));

    cout << "Random number between " << smaller << " and " << greater << " is " << rand_num;

    return 0;
}


