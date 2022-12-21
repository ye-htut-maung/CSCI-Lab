#include <iostream>
using namespace std;

int main () {

    // declaration
    int hour, minute;
    string is_am_pm;

    // asking to user
    cout << "Enter the current time." << endl;
    cout << "Hour: ";
    cin >> hour;
    cout << "Minute: ";
    cin >> minute;
    cout << "AM or PM? ";
    cin >> is_am_pm;
    if (hour == 9 && minute == 0 && is_am_pm == "AM") {
        cout << "It is time for breakfast.";
    } else if (hour == 5 && minute == 30 && is_am_pm == "PM") {
        cout << "Time for dinner!";
    } else if (hour >= 8 && is_am_pm == "PM") {
        cout << "Time for evening snack!";
    } else {
        cout << "It is not time to eat.";
    }

    return 0;
}