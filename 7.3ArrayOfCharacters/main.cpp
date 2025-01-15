#include <iostream>
using namespace std;

int main()
{
    // you DON'T need to use a loop to print out all the elements, char arrays enable printing out of all elements at once
    char message1[] = {'H', 'e', 'l', 'l', 'o'};
    // instead of just printing out "Hello", a bunch of random characters will be appended
    cout << "message[]: " << message1 << "\n";
    cout << "message[] element count: " << size(message1) << "\n\n";

    // null terminator must be added to signify the end of the char array
    char message2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "message[] WITH null terminator: " << message2 << "\n";
    // number of elements includes the null terminator
    cout << "message[] element count: " << size(message2) << "\n\n";

    // initializing array with an extra element AUTO-fills in the null
    // ...terminator
    char message3[6] = {'H', 'e', 'l', 'l', 'o'};
    cout << "message[] WITH auto-filled null terminator: " << message3 << "\n";
    cout << "message[] element count: " << size(message3) <<"\n\n";

    // defining a literal C string is allowed
    char message4[] = {"Hello"}; // implicit \0 is appendeded
    // ...making it a C string
    cout << "message[] WITH literal C string: " << message4 << "\n";
    cout << "message[] element count: " << size(message4) <<"\n\n";

    // spaces are valid as well
    char message5[] = {"Hello World!"};
    cout << "message[] WITH literal C string with spaces: " << message5 << "\n";
    cout << "message[] element count: " << size(message5) <<"\n\n";

    return 0;
}