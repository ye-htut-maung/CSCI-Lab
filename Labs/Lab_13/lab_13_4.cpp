#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    int rand_num;
    int square_num;

    srand(time(0));

    rand_num = 2000 + (rand() % (5000 - 2000) + 1);

    cout << "All numbers between " << 1000 << " and " << rand_num << " whose square ends in 56 are:" << endl;

    for (int i = 1000; i <= rand_num; i++) {
        square_num = pow(i, 2);

        if ((square_num % 100) == 56) {
            cout << i << " squared is " << square_num << endl;
        }
    }


    return 0;
}