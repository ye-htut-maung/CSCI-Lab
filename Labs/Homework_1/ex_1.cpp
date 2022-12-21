#include <iostream>
using namespace std;

int main () {

    // Declaration
    string name;
    int age_year, age_day;
    int height_inch, height_feet;

    // asking user name, height in inch and age in year
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your height in inches?" << endl;
    cin >> height_inch;
    cout << "What is your age?" << endl;
    cin >> age_year;

    // converting age in year to day
    age_day = age_year * 365;
    // converting height in inch to feet and inch
    height_feet = height_inch / 12;
    height_inch = height_inch % 12;

    // printing to user
    cout << "Hello, " << name << "." << endl;
    cout << "Your age in days is " << age_day << "." << endl;
    cout << "Your height in feet and inches is " << height_feet << " feet " << height_inch << " inches.";

    return 0;
}