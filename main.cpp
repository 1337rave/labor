#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;

    // Введення рядка
    cout << "Enter a string of characters: ";
    getline(cin, inputString);

    string cleanedString;
    for (char c : inputString) {
        if (!isspace(c)) {
            cleanedString += c;
        }
    }

    string reversedString = cleanedString;
    reverse(reversedString.begin(), reversedString.end());

    if (cleanedString == reversedString) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
