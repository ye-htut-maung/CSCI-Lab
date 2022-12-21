#include <iostream>
using namespace std;



bool has3 (int n) {
    int i = 0;
    i = n % 10;
    if (i == 3) {
      
        return true;
    } else if (n == 0) {
        return false;
    }
     else {
        return has3(n / 10);
    }

    
}

int main() {

    int n = 41452;

    if (has3(n)) {
        cout << "It has 3";
    } else {
        cout << "It doesn't have 3";
    }


    return 0;
}