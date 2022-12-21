// // problem 1
// Write a program that asks the user to enter the day of the week. If the day is either Tuesday or
// Thursday it should print a message You have a CS111 class today. otherwise it prints: No CS111 today!
// Here is a sample to show how the program runs.
// What day is it? Thursday
// You have a CS111 class today.
// Answer:
#include <iostream>
using namespace std;// Checked

int main() {
    string day;

    cout << "Enter the day of the week: ";
    cin >> day;

    if (day == "Tuesday" || day == "Thursday") {
        cout << "You have a CS111 class today";
    } else {
        cout << "No CS111 today!";
    }


    return 0;
}