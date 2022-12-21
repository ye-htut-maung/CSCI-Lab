#include <iostream>
using namespace std;

double average(int x, int y) {
    return (x+y) / 2.0;
}

int middle(int x, int y, int z) {
    int largest = x;
    int smallest = x;
    int middle;
    if (y > largest) {
        largest = y;
    }
    if (z > largest) {
        largest = z;
    }

    if (y < smallest) {
        smallest = y;
    }
    if (z < smallest) {
        smallest = z;
    }

    if (x != largest && x != smallest) {
        middle = x;
    } else if (y != largest && y != smallest) {
        middle = y;
    } else if (z != largest && z != smallest) {
        middle = z;
    }

    return middle;
}

string initialLetters(string arr[], int size) {
    string s = "";

    for (int i = 0; i < size; ++i) {
        s += arr[i].substr(0, 1);
    }

    return s;
}

int findIndexContains(string arr[], int size, string s) {

    for (int i = 0; i < size; ++i) {
        if (arr[i].find(s) >= 0 && arr[i].find(s) < arr[i].size()) {
            return i;
        }
    }
    return -1;
}

string longest(string x[], int size) {
    int longest = x[0].size();
    int longest_index = 0;
    for (int i = 0; i < size; ++i) {
        if (x[i].size() > longest) {
            longest = x[i].size();
            longest_index = i;
        }
    }

    return x[longest_index];
}

int main() {

    string x[5] = {"CS", "111", "Queens", "College", "CUNY"};
    // (a) Return the average. Here 2.5 is printed.
    cout << average(2, 3) << endl;
    // (b) Return the middle of 3 numbers, here 5 is printed.
    cout << middle(5, 6, 4) << endl;
    // (c) Return the string formed by the first characters of the entries. Here C1QCC.
    cout << initialLetters(x, 5) << endl;
    // (d) Return the first index of an entry containing a target or -1 if not present. Here 2 is printed.
    cout << findIndexContains(x, 5, "ee") << endl;
    // (e) Return the longest entry. Here print College
    cout << longest(x, 5) << endl;

    return 0;
}