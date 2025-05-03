#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    cout << "Welcome! Opening testfile.txt...\n";

    ifstream inFile;
    inFile.open("testfile.txt");
    if (inFile.fail()) {
        cout << "Failed to open :(\n";
        return 1;
    } else {
        cout << "File successfully created and opened :)\n";
    }

    string myText{};

    while(getline(inFile, myText)) {
        cout << myText << "\n";
        // getline(inFile, myText);
    }

    inFile.close();

    return 0;
}