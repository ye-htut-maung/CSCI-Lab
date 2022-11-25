#include <iostream>
using namespace std;

int main() {

    int numbers[3][3];
    double total = 0.0;
    int counter = 0;
    double average;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter row " << i+1 << " and col " << j+1 << ": ";
            cin >> numbers[i][j];
            total += numbers[i][j];
            counter++;
        }
    }

    average = total / counter;

    cout << "Numbers greater than average: ";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (numbers[i][j] > average) {
                cout << numbers[i][j] << " ";
            } 
        }
    }

    
    

    return 0;
}