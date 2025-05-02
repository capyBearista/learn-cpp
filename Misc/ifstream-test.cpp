#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    cout << "Welcome!\nFile name: ";

    string userFile;
    getline(cin, userFile);

    ifstream inFile;

    inFile.open(userFile);
    
    if (inFile.fail()) {
        cout << "Failed to open :(\n";
        return 1;
    } else {
        cout << "File successfully created and opened :)\n";
    }
    string myText;
    getline(inFile, myText);

    do {
        getline(inFile, myText);
        cout << myText << "\n";
        
    } while(!inFile.eof());

    inFile.close();

    return 0;
}