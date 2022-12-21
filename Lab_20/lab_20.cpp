 #include <iostream>
 using namespace std;

 int main() {

    int x;
    string arr[100];
    cout << "How many words?";
    cin >> x;

    if (x < 1 || x > 100) {
        cout << "Invalid Input";
        return 0;
    }

    arr[x];
    
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    for (int i = x - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }



    return 0;
 }