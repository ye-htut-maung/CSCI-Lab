#include <iostream>
using namespace std;

void swap(int &a, int &b);
void updateAscending(int &a, int &b, int &c);
void updateDescending(int &a, int &b, int &c);

int main() {

    int a, b, c;
    string ascendOrDescend;

    cout << "Enter three numbers: ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Would you like the numbers sorted in ascending or descending order? ";
    cin >> ascendOrDescend;

    if (ascendOrDescend == "ascending") {
        updateAscending(a, b, c);
    } else {
        updateDescending(a, b, c);
    }

    cout << "Your sorted variables now store: a = " << a << ", b = " << b << ", c = " << c << endl;


    return 0;
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void updateAscending(int &a, int &b, int &c) {
    if (a > c) {
        swap(a, c);
    } 
    
    if (a > b) {
        swap(a, b);
    } 
    
    if (b > c) {
        swap(b, c);
    }
}

void updateDescending(int &a, int &b, int &c) {
    if (a < c) {
        swap(a, c);
    } 
    
    if (a < b) {
        swap(a, b);
    } 
    
    if (b < c) {
        swap(b, c);
    }
}