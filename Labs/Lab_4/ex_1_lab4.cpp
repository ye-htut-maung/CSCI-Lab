#include <iostream>
using namespace std;

int main () {

    int category;

    cout << "Enter a category of hurricane (1 through 5): " << endl;
    cin >> category;

    if (category == 1){
        cout << "The wind speed is 74-95 mph.";
    } else if (category == 2) {
        cout << "The wind speed is 96 - 110 mph.";
    } else if (category == 3) {
        cout << "The wind speed is 111 - 130 mph.";
    } else if (category == 4) {
        cout << "The wind speed is 131 - 155 mph.";
    } else {
        cout << "The wind speed exceeds 155 mph.";
    }

    return 0;
}