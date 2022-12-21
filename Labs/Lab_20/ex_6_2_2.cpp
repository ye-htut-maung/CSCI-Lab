#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int rand_0toN1(int n);
int hits[5];


int main() {

    int n = 0;
    int r = 0;

    srand(time(0));
    
    cout << "Enter how many trials and press ENTER: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        r = rand_0toN1(5);
        ++hits[r];
    }
     
    for (int i = 0; i < 5; i++) {
        cout << i << ": " << hits[i] << " Accuracy: ";
        double results = hits[i];
        cout << results / (n / 5) << endl;
    }

    return 0;
}

int rand_0toN1(int n) {
    return rand() % n;
}