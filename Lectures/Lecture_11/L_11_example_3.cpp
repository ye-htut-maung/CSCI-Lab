#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    int rand_num, frequency = 5;

    srand(time(0));
    for (int i = 1; i <= frequency; i++) {
        rand_num = 1 + (rand() % 6); 
        cout << rand_num << " ";
    }
    


    return 0;
}