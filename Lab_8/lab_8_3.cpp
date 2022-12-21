#include <iostream>
using namespace std;

int main() {

    double grade = 0, subjects = 0;
    double average_grade;
    double total_grade;



    while (true) {
        cout << "Enter a numeric grade: ";
        cin >> grade;
        if (grade < 0) {
            break;
        }
        ++subjects;
        total_grade += grade;
    }

    average_grade = total_grade / subjects;

    cout << "The average grade is " << average_grade;


    return 0;
}