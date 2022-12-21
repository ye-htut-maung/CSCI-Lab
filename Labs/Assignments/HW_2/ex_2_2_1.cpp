#include <iostream>
using namespace std;

int main() {
	
	int n1, n2;
	
	cout << "Enter first number: ";
	cin >> n1;

	cout << "Enter second number: ";
	cin >> n2;
/*
	if (n1 < n2) {
		for(int i = n1; i <= n2; i++) {
			cout << i << endl;
		}
	} else {
		for(int i = n1; i >= n2; i--) {
			cout << i << endl;
		}
	}
*/

	int i = n1;
	
	if (i < n2) {

		while (i <= n2) {
			cout << i << " ";
			i = i + 1;
		}
	} else {
		while (i >= n2) {
			cout << i << " ";
			i = i - 1;
		}
	}

	return 0;
}
