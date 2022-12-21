
#include <iostream>
using namespace std;

int main () {

    int month, day, year;

    cout << "Enter your birth month: ";
    cin >> month;
    cout << "Enter your birth day: ";
    cin >> day;
    cout << "Enter your birth year: ";
    cin >> year;

    if (month >= 9 || month <= 3) {
        if (month == 9 && day < 16) {
            cout << "You were born in spring or summer" << endl;
        } else if (month == 3  && day > 15) {
            cout << "You were born in spring or summer." << endl;
        } else {
            cout << "You were born in fall or winter." << endl;
        }
    } else {
        cout << "You were born in spring or summer." << endl;
    }

    if (year % 4 == 0) {
        if (year % 400 == 0) {
            cout << "You were born in a leap year.";
        } else if (year % 100 == 0) {
            cout << "You were not born in a leap year.";
        } else {
            cout << "You were born in a leap year.";
        }
    } else {
        cout << "You were not born in a leap year.";
    }
    
    return 0;
}


