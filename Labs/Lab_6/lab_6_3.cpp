#include <iostream>
using namespace std;

int main() {

    double salary = 0.01;
    int day = 1;

    cout << "Day  Salary";
    while (salary <= 10000) {
        cout << day << "  " << salary << endl;

        salary *= 2;
        day += 1;
    }
    cout << day << "  " << salary << endl;
 
    return 0;
}