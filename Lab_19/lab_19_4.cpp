#include <iostream>
using namespace std;


int main() {

    int numbers[10];
    int sum = 0;
    double x ;

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    x = sum / 10.0;
    int counter = 0;

    cout << "Average of entries in array: " << x << endl;
    sum = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] >= x) {
            sum += numbers[i];
            counter += 1;
        }
        
    }

    x = sum / (double)counter;

    cout << "Average of entries greater than overall average: " << x << endl;



    return 0;
}