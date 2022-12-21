#include <iostream>
using namespace std;

int main () {

    double price;
    double discount = 0.1;

    cout << "What is the original price?" << endl;
    cin >> price;

    if (price < 125) {
        cout << "That does not qualify for a discount. The price is $" << price << ".";
    } else {
        price = price - (price * 0.1);
        cout << "The reduced price is $" << price << ".";
    }
    return 0;
}