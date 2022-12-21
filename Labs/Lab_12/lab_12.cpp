#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Print the square root of 7
    // Print an integer whose square root begins with 1.4
    // Print a random number between 100 and 200 inclusive

    cout << sqrt(7) << endl;
    
    cout << pow(1.4, 2) << endl;

    srand(time(0));
    cout << 100 + (rand() % 101);

    return 0;
}