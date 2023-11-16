#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string inputString;

    
    cout << "Enter a string of characters: ";
    getline(cin, inputString);

    istringstream iss(inputString);
    int wordCount = 0;

    
    while (iss >> inputString) {
        wordCount++;
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}
