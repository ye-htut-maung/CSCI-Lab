#include <iostream>
using namespace std;

int main () {

    double price;
    double discount_20 = 0.2;
    double discount_40 = 0.4;

    cout << "What is the original price?" << endl;
    cin >> price;

    if (price <= 100) {
        price = price - (price * 0.2);
        cout << "That qualifies for a 20\% discount. Your discounted price is $" << price << ".";
    } else {
        price = price - (price * 0.4);
        cout << "That qualifies for a 40\% discount. Your discounted price is $" << price << ".";
    }

    return 0;
}