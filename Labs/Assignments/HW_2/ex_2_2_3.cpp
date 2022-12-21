#include <iostream>
using namespace std;

int main() {
	
	int i = 0, n = 0;

	cout << "Enter a number and press ENTER: ";
	cin >> n;

	while (i <= n) {
		cout << i << " ";
		i = i + 2;
	}

	return 0;
}
