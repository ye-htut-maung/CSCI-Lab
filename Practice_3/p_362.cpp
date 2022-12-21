#include <iostream>
using namespace std;

void insertX(string data[], int size) {
    
    for (int i = 0; i < size; i++) {
        int str_length = data[i].size();
        int middle = str_length / 2;

        data[i].insert(middle, "X");
    }
}

int main() {
    string data[4] = {"abcd", "Hello", "1234", ""};
    insertX(data, 4);
    for (int i = 0; i < 4; i++)
    cout << data[i] << " "; // output: abXcd HeXllo 12X34 X
    return 0;
}
