#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(0));
    int numbers[50];
    int smallest, largest;

    for (int i = 0; i < 50; i++) {
        numbers[i] = rand() % (100) + 1;
        cout << numbers[i] << " ";
    }

    cout << endl;

    smallest = numbers[0];
    largest = numbers[1];

    for (int i = 0; i < 50; i ++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        } 
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "The largest number in the array is " << largest << endl;
    cout << "The smallest number in the array is " << smallest << endl;

    

    return 0;
}