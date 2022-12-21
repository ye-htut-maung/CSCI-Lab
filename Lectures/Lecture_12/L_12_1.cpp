#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    for (int i = 1; i <= 6; i++) {
        cout << 1 + (rand() % (6 - 1) + 1) << endl;
    }

    return 0;
}