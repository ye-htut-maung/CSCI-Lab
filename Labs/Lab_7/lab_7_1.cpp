#include <iostream>
using namespace std;

int main() {

    int single_price = 1, total = 0;

    while (single_price != 0) {
    cout << "Enter the price of an item: ";
    cin >> single_price;
    
    total += single_price;
    }

    cout << "Your checkout total is $" << total << endl;

    if (total > 100) {
        cout << "That's expensive!";
    }


    return 0;
}