#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    
    for (int i = 1; i <= 10; i++) {
        cout << (rand() % 10) + 1 << endl;
    }

    return 0;
}