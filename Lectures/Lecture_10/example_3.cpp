#include <iostream>
using namespace std;

int main () {

    int user_week = 3;

    for (int week = 1; week <= user_week; week++) {
        cout << "Week: " << week << endl;
        for (int day = 1; day <= 7; day++) {
            cout << "    Day: " << day << endl;
        }
    }


    return 0;
}