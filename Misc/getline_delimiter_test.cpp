#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter: ";
    getline(cin, line, '?');
    cout << line;
}