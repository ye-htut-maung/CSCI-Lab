#include <iostream>
using namespace std;

int main() {

	int total = 0, n = 0;

	cout << "Welcome to NIM. Pick a starting total: ";
	cin >> total;
	
	while (total < 1) {
		cout << "Please enter a starting total greater than 0: ";
		cin >> total;
	}
	while (true) {
		
		if ((total % 3) == 2) {
			total = total - 2;
			cout << "I am subtracting 2." << endl;	
		} else {
			--total;
			cout << "I am subtracting 1." << endl;
		}
		cout << "New total is " << total << endl;
		if (total <= 0) {
			cout << "I win!" << endl;
			break;
		}
		
		cout << "Enter num to subtract (1 or 2): ";
		cin >> n;

		while (n < 1 || n > 2) {
			cout << "Input must be 1 or 2." << endl;
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

	return 0;
}
