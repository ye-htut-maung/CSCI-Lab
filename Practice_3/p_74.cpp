#include <iostream>
using namespace std;

string shortest(string x[], int size) {
    int shortest = x[0].size();
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (x[i].size() < shortest) {
            shortest = x[i].size();
            index = i;
        }
    }
    return x[index];
}

int main() {
    string x[5] = {"CS", "111", "Queens", "College", "CUNY"};
    // // (a) Return the average. Here 2.5 is printed.
    // cout << average(2, 3) << endl;
    // // (b) Return the middle of 3 numbers, here 5 is printed.
    // cout << middle(5, 6, 4) << endl;
    // // (c) Return the string formed by the first characters of the entries. Here C1QCC.
    // cout << initialLetters(x, 5) << endl;
    // // (d) Return the first index of an entry containing a target or -1 if not present. Here 2 is printed.
    // cout << findIndexContains(x, 5, "ee") << endl;
    // (e) Return the shortest entry. Here print CS
    cout << shortest(x, 5) << endl;
    return 0;
}