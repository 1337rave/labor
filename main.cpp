#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string of characters: ";
    getline(std::cin, inputString);

    for (char& c : inputString) {
        if (c == ' ') {
            c = '\t';
        }
    }

    cout << "Result: " << inputString << endl;

    return 0;
}
