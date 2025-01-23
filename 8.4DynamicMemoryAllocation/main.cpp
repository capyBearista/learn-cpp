#include <iostream>
using namespace std;

int main()
{
    // using unitialized pointers or pointer containing null is a BAD idea
    int *p_int1;
    *p_int1 = 55;    // writing to junk address

    int *p_int2 = nullptr;
    *p_int2 = 55;    // writing to nowhere

    // initialize pointer with dynamic memory... dynamically allocate memory
    //...at run time and make pointer point to it
    int *p_number1 = nullptr;
    p_number1 = new int;    // dynamically allocate space for a single int on
                            //...the heap. This memory belong to our program
                            //...from now on. The system can't use it for
                            //...anything else, until WE return it.
                            // After this line executes, we will have valid
                            //...memory location allocated. The size of the
                            //...allocated memory will be such that it can
                            //...store the type pointed to by the pointer
    
    *p_number1 = 77;    // writing into dynamically allocated memory
    cout << "dynamically allocating memory:\n";
    cout << "*p_number1 = " << *p_number1 << "\n";

}