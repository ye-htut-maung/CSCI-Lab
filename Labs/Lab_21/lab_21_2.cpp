#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {

    int input[10];
    int output[10];

    srand(time(0));

    cout << "Input array values: " << endl;

    for (int i = 0; i < 9; i++) {
        input[i] = rand() % (9) + 1;
        cout << input[i] << " ";
    }
    cout << endl;
    
    cout << "Output array values: " << endl;

    for (int i = 0; i < 9; i ++) {
        if (input[i] % 3 == 0) {
            output[i] = 3;
        } else {
            output[i] = 0;
        }
        cout << output[i] << " ";
    }
    


    return 0;
}