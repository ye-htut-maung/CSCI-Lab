#include <iostream>
using namespace std;

int main() {

    int score;

    cout << "Enter a numeric score: ";
    cin >> score;

    if (score > 80) {
        cout << "A";
    } else if (score <= 80 && score >= 60) {
        cout << "B";
    } else if (score <= 59 && score >= 50) {
        cout << "C";
    } else if (score <= 49 && score >= 45) {
        cout << "D";
    } else {
        cout << "F";
    }


    return 0;
}