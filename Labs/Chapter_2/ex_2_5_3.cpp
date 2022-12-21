#include <iostream>
using namespace std;

int main() {

    bool isplay = true;
    string quit_y_n = "";

    while (isplay) {

        int total = 0, n = 0;
        int n2 = 0;
        int to_substract = 0;

        cout << "Welcome to NIM. Pick a starting total: ";
        cin >> total;
        
        while (total < 1) {
            cout << "Please enter a starting total greater than 0: ";
            cin >> total;
        }
        cout << "Enter a range of substracting number(1 - ?): ";
        cin >> n2;
        while (true) {
            
            if ((total % (n2+1)) == 0) {
                --total;
                cout << "I am subtracting 1." << endl;	
            } else {
                to_substract = total % (n2+1);
                total -= to_substract;
                cout << "I am subtracting " << to_substract << "." << endl;
            }
            cout << "New total is " << total << endl;
            if (total <= 0) {
                cout << "I win!" << endl;
                break;
            }
            
            cout << "Enter num to subtract (from 1 to " << n2 << ")";
            cin >> n;

            while (n < 1 || n > n2) {
                cout << "Input must be from 1 to " << n2 <<  "." << endl;
                cout << "Re-enter: ";
                cin >> n;
            }
            total = total - n;
            cout << "New total is " << total << endl;

            if (total <= 0) {
                cout << "You win!" << endl;
                break;
            }
        }
        cout << "Do you want to continue to play? (Y/N)";
        cin >> quit_y_n;

        while (true) {
            if (quit_y_n == "Y" || quit_y_n == "y") {
                isplay = true;
                break;
            } else if (quit_y_n == "N" || quit_y_n == "n") {
                isplay = false;
                break;
            } else {
                cout << "Please only enter Y and N" << endl;
                cin >> quit_y_n;
            }
        }
    }
	return 0;
}
