// This computes the sum of cubes of numbers from 1 to x. Since it is a
// sum we expect to adjust the recursive call by adding something
// int sumCubes(int x){
// if(x <= 0) return 0;
// return RECURSIVE CALL + WHAT;
// }

#include <iostream>
#include <cmath>
using namespace std;

int sumCubes(int x) {
    if(x<= 0) return 0;
    return sumCubes(x - 1) + pow(x, 3);
}

int main() {
    
    int num = 3;
    int num2 = 4;

    cout << sumCubes(num) << endl;
    cout << sumCubes(num2) << endl;


    return 0;
}