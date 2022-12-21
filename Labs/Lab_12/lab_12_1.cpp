#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() {

    int num;
    int rand_num;
    cout << "Enter a number greater than or equal to 10: ";
    cin >> num;

    while (num < 10) {
        cout << "Invalid input! Try again: ";
        cin >> num;
    }

    srand(time(0));
    rand_num = 1 + (rand() % num);
    cout << "Random number between 1 and " << num << " is " << rand_num;



    return 0;
}