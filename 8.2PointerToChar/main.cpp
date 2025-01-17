#include <iostream>
using namespace std;

int main()
{
    // pointer to char can be initialized as normal
    char char1 = 'A';
    char *p_char1 = &char1;

    // pointer to char can also be initialized with string literal (C-String)
    // this points to an array of chars containing "Hello World!", specifically
    //...pointing to the first element in the array, "H"
    char *p_message1 = "Hello World!";

    // Really, the compiler expands the string into an character array of
    //...'const char'. Meanwhile, what we are using here is NOT a const char
    //...pointer, so this can technically be used to try and modify data in the
    //...array of const chars, which would NOT work. The compiler (e.g. MSVC)
    //...may warn against this as a result. Char pointers should use const
    
    // testing dereferencing on char pointer
    cout << "p_message1 = " << p_message1 << "\n";    // despite printing out
    //...the pointer itself, the whole string is printed
    cout << "*p_message1 = " << *p_message1 << "\n";    // the pointer
    //...technically points to the first element of the charatcer array

    cout << "\n";
    // you cannot change the chars/string as the char array is const
    //*p_message = 'B';
    
    // if you want to modify, then use regular arrays
    char message2[] = "Hello there!";
    cout << "message2 = " << message2 << "\n";
    message2[0] = 'T';
    cout << "message2 = " << message2 << "\n";
    
    return 0;
}