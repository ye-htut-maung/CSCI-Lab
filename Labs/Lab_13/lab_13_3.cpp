#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

    int low, high;
    int sqrt_num;

    srand(time(0));
    low = 50 + (rand() % (200-50 +1));
    high = 700 + (rand() % (3000 - 700 + 1));

    cout << "The perfect squares between " << low << " and " << high << " are " << endl;
    
    for (int i = low; i <= high; i++) {
        sqrt_num = sqrt(i);
        if (round(sqrt_num) * round(sqrt_num) == i) {
            cout << i << endl;
        }
    }
    


    return 0;
}