#include <iostream>
using namespace std;

int main()
{
    /****variable braced initialization****/
    int a;    // stores random garbage value
    int b{};    // initializes to 0
    int c{5};    // initializes to 5
    int d{10};
    int expr{b + c + d};    // initializes to sum of vars

    // WON'T COMPILE
    // int bad_initialization {doesnt_exist1 + doesnt_exist2};
    //int narrowing_converstion{2.9};

    //cout << "a = " << a;
    cout << "\nb = " << b;
    cout << "\nc = " << c;
    cout << "\nd = " << d;
    cout << "\nexpr = " << expr;    

    /****functional variable initialization****/
    int e;    // stores random garbage value
    int f();    // initializes to 0
    int g(6);    // initializes to 5
    // int expr2(f + g + h);    // initializes to sum of vars

    // WON'T COMPILE
    // int bad_initialization {doesnt_exist1 + doesnt_exist2};
    //int narrowing_converstion{2.9};

    //cout << "\ne = " << a;
    cout << "\nf = " << b;
    cout << "\ng = " << c;  
    return 0;
}