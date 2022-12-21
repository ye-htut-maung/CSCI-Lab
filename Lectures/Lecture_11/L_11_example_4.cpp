#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    int head_tail;
    int head_counter = 0, tail_counter = 0;

    for (int i = 1; i <= 10; i++) {
        head_tail = rand() % 2;
        if (head_tail == 0) {
            tail_counter++;
        } else if (head_tail == 1) {
            head_counter++;
        } else {
            cout << head_tail;
        }
    }

    cout << "Number of head: " << head_counter << endl;
    cout << "Number of tail: " << tail_counter << endl;

    return 0;
}