#include<iostream>
using namespace std;

int main() {

    string names[3] = {"[Your name]", "Alice", "Bob"};
    int numbers[3] = {100, 90, 80};

    for (int i = 0; i < 3; i++) {
        cout << names[i] << "'s score is " << numbers[i] << "." << endl;
    }
    return 0;
}