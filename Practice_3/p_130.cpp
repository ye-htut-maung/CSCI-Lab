#include <iostream>
using namespace std;

bool negative(int x, int y) {
    if (x < 0 || y < 0) {
        return true;
    } else {
        return false;
    }
}

string firstEntry(string a[][3], int row, int col) {
    return a[0][0];
}

string longest(string b[], int size) {
    int longest = b[0].size();
    int longest_index = 0;

    for (int i = 0; i < size; i++) {
        int str_length = b[i].size();
        if (str_length > longest) {
            longest = str_length;
            longest_index = i;
        }
    }

    return b[longest_index];
}

string removeFirst(string s ) {
    return s.erase(0, 1);
}
void addQ(string &s, int index) {
    s.insert(index, "Q");
}
int main() {
    int x = 1, y = 2;
    string a[2][3] = {{"CS", "111", "Final"}, {"Question", "number", "3"}};
    string b[3] = {"An", "Easy", "Problem"};
    // (a) Return true if at least one of x and y is negative. Here nothing is printed
    if (negative(x, y)) cout << "Yes" << endl;
    // (b) Return the first entry in the first row. Here CS is printed.
    cout << firstEntry(a, 2, 3) << endl;
    // (c) Return the longest element. Here Problem is printed.
    cout << longest(b, 3) << endl;
    // (d) Remove the first letter. Here umber is printed.
    cout << removeFirst(a[1][1]) << endl;
    // (e) Insert a Q at the specified position of a string. Here CQS is printed.
    addQ(a[0][0], 1);
    cout << a[0][0] << endl;
return 0;
}
