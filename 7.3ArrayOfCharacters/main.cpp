#include <iostream>
using namespace std;

int main()
{
    // you DON'T need to use a loop to print out all the elements, char arrays enable printing out of all elements at once
    char message1[] {'H', 'e', 'l', 'l', 'o'};
    // instead of just printing out "Hello", a bunch of random characters will be appended
    cout << "message[]: " << message1 << "\n";

    // null terminator must be added to signify the end of the char array
    char message2[] {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "message[] WITH null terminator: " << message2 << "\n";
    
    // number of elements includes the null terminator
    cout << "message[] element count: " << size(message2);

    // initializing array with auto-filled null chars (size 6 but 5 chars given)
    char message3[6] {'H', 'e', 'l', 'l', 'o'};
    cout << "message[] WITH auto-filled: " << message3 << "\n";
    cout << "message[] element count: " << size(message3);

    return 0;
}