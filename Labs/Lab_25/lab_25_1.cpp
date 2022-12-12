#include <iostream>
using namespace std;

void lowerCaseString(string &name) {
    for (int i = 0; i < name.size(); i++) {
        int charNum = (int)name[i];
        if (charNum >= 65 && charNum <= 90) {
            name[i] = (char)(charNum + 32);
        }
    }

}

string pigLatinConverter(string name) {

    if (name[0] == 'a' || name[0] == 'e' || name[0] == 'i' || name[0] == 'o' || name[0] == 'u') {
        name.append("way");
    } else {
        string temp = name.substr(0 , 1);
        name.append(temp);
        name.append("ay");
        name.erase(0, 1);
    }

    return name;
}

void capitalizeFirstLetter(string &name) {
    name[0] = name[0] - 32;
}

int main() {
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    lowerCaseString(firstName);
    lowerCaseString(lastName);
    firstName = pigLatinConverter(firstName);
    lastName = pigLatinConverter(lastName);
    capitalizeFirstLetter(firstName);
    capitalizeFirstLetter(lastName);
    cout << "Your name in Pig Latin is " << firstName << " " << lastName << ".";
    return 0;
}