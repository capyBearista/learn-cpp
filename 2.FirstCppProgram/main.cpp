#include <iostream>
using namespace std;

int main()
{
    cout << "Hello there!" << endl;

    // variable braced initialization
    int a;    // stores random garbage value
    int b{};    // initializes to 0
    int c{5};    // initializes to 5
    int d{10};

    int expr{b + c + d};    // initializes to sum of vars

    // WON'T COMPILE
    // int bad_initialization {doesnt_exist1 + doesnt_exist2};

    //int narrowing_converstion{2.9};

    cout << "a = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c;
    cout << "\nd = " << d;
    cout << "\nexpr = " << expr;    

    return 0;
}