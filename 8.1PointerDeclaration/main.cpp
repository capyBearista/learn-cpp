#include <iostream>
using namespace std;

int main()
{
    int * p_int;    // can only store an address of variable type int
    double * p_double;

    // explicitly initalize to nullpty, points nowhere
    int * p_int1 = nullptr;
    double * p_double1 = nullptr;

    // all pointers will be the same size, even differing pointers that
    //...point to different types
    cout << "Size of p_int (pointer): " << sizeof(p_int) << "\n" << "Size"
    << " of int: " << sizeof(int) << "\n\n";

    cout << "Size of p_double (pointer): " << sizeof(p_double) << "\n" << "Size"
    << " of int: " << sizeof(double) << "\n\n";

    cout << "Size of p_int1 (pointer): " << sizeof(p_int1) << "\n" << "Size"
    << " of int: " << sizeof(int) << "\n\n";

    cout << "Size of p_double1 (pointer): " << sizeof(p_double1) << "\n" << 
    "Size" << " of int: " << sizeof(double) << "\n\n";

    // all these * placements are valid
    int*  p_int2 = nullptr;
    int * p_int3 = nullptr;
    int  *p_int4 = nullptr;    // easier to remember when multiple variables
    //...declared on same line
    
    int* p_int5, int1;
    int *p_int6, int2;
    // notice that int1 and int2 are NOT pointers, in this case, it may be
    //...clearer to put the asterisk on the right to "imply" that it is only for
    //...the first value (p_int5 and p_int7)

    // clarifying the above declarations
    int1 = 10;    // is just a int, stores value 10
    int2 = 20;
    p_int5 = &int1;    // is a pointer, contains the address of int1
    p_int6 = &int2;
    cout << p_int5 << "\n" << p_int6 << "\n";
    cout << int1 << "\n" << int2 << "\n";

    // ideally, separate declarations onto different lines, no confusion
    int *p_int7;
    int int3;

    // 'type *ptr{}' is equivalent to 'type *ptr = nullptr'
    int *test1;    // stores a garbage, irrelevant value
    int *test2{};
    int *test3{nullptr};

    cout << test1 << "\n";
    cout << test2 << "\n";    // will print 0
    cout << test3 << "\n";    // will print 0

    cout << "\n";

    // assigning data to pointer variables
    int int_var1 = 55;
    int *p_int_var1 = &int_var1;    // & <-- address-of operator

    cout << "int_var1 = " << int_var1 << "\n";
    cout << "p_int_var1 (address of int_var1) = " << p_int_var1 << "\n";

    int int_var2 = 65;
    p_int_var1 = &int_var2;

    cout << "p_int_var1 (address of int_var2) = " << p_int_var1 << "\n";

    // cannot assign a variable to a pointer of a different type
    int *p_int8 = nullptr;
    double double_var1 = 11;
    // p_int8 = &double_var1;    <-- compile error

    return 0;
}