#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() {
    srand(time(0));
    int numbers[1000];
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

    for (int i = 0; i < 1000; i++) {
        numbers[i] = rand() % (9 - 0 + 1) + 0 ;
        if (numbers[i] == 0) zero++;
        if (numbers[i] == 2) two++;
        if (numbers[i] == 3) three++;
        if (numbers[i] == 4) four++;
        if (numbers[i] == 5) five++;
        if (numbers[i] == 6) six++;
        if (numbers[i] == 7) seven++;
        if (numbers[i] == 8) eight++;
        if (numbers[i] == 9) nine++;
        if (numbers[i] == 1) one++;

    }

    cout << "0 count" << zero << ", 1 count " << one << ", 2 count " << two << ", 3 count " << three << ", 4 count " << four << ", 5 count " << five << ", 6 count " << six << ", 7 count " << seven << ", 8 count " << eight << ", 9 count " << nine << ".";

}