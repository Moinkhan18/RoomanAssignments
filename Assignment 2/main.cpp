#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    // Using the compare() function
    if (str1.compare(str2) == 0) {
        cout << "Strings are equal." << endl;
    } else if (str1.compare(str2) < 0) {
        cout << "First string is less than the second." << endl;
    } else {
        cout << "First string is greater than the second." << endl;
    }

    // Using relational operators
    if (str1 == str2) {
        cout << "Strings are equal." << endl;
    } else if (str1 < str2) {
        cout << "First string is less than the second." << endl;
    } else {
        cout << "First string is greater than the second." << endl;
    }

    return 0;
}
