#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    cout << "Welcome!\nFile name: ";

    string userFile;
    getline(cin, userFile);

    ofstream outFile;

    outFile.open(userFile);
    
    if (outFile.fail()) {
        cout << "Failed to open :(\n";
        return 1;
    } else {
        cout << "File successfully created and opened :)\n";
    }

    bool userContinue = true;

    while (userContinue) {
        cout << "Write, then hit Enter: ";
        string userInput{};
        cin.ignore(1024, '\n');
        getline(cin, userInput);
        outFile << userInput;

        cout << "Would you like to continue? [Y|N]: ";
        char userChoice{};
        cin >> userChoice;
        if (userChoice == 'N' || userChoice == 'n') {
            userContinue = false;
        }
        outFile << "\n";
    }

    outFile.close();

    return 0;
}