#include <iostream>
using namespace std;

int main() {

    int num1, num2, counter = 1;

    cout << "Enter a big number : ";
    cin >> num1;

    cout << "Enter a bigger number: ";
    cin >> num2;
    counter++;

    while (num2 > num1 && counter <= 5) {
        cout << "Enter a bigger number: ";
        cin >> num2;
        counter++;
    }

    if (counter == 6) cout << "thanks";
    

    return 0;
}