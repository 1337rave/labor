#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string of characters: ";
    getline(std::cin, inputString);

    int letters = 0, digits = 0, others = 0;

    for (char c : inputString) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Numbers: " << digits << endl;
    cout << "Other symbols: " << others << endl;

    return 0;
}
