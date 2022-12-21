#include <iostream>
#include <cmath>
using namespace std;

int calculate_cube(int num);

int main() {

    int num = 3;
    int cube;

    cube = calculate_cube(num);
    
    cout << "The cube: " << cube;


    return 0;
}

int calculate_cube(int num) {


    return pow(num, 3);
}