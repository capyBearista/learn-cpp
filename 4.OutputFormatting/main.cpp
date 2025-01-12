#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int col_width = 15;
    int age_width = 7;

    cout << setw(col_width) << "Last Name" << setw(col_width) << "First Name" << setw(age_width) << "Age" << "\n";
    // obviously we might want an array or some other automation to print out each record
    cout << setw(col_width) << "Doe" << setw(col_width) << "John" << setw(age_width) << "30" << "\n";
    cout << setw(col_width) << "Doez" << setw(col_width) << "Jane" << setw(age_width) << "30" << "\n";
    
    cout << left;
    cout << setw(col_width) << "Left" << setw(col_width) << "Justif" << setw(age_width) << "0" << "\n";
    cout << right;

    // sign is LEFT justified, number is RIGHT justified
    cout << internal;
    cout << setw(col_width) << "Internal" << setw(col_width) << "Justif" << setw(age_width) << 45.6 << "\n";
    cout << setw(col_width) << "Internal" << setw(col_width) << "Justif" << setw
    (age_width) << -45.6 << "\n";

    // fill character
    cout << right;
    cout << setfill('*');
    cout << setw(col_width) << "Fill" << setw(col_width) << "Character" << setw(age_width) << 123 << "\n";
    cout << setfill(' ');
    cout << setw(col_width) << "BlankFill" << setw(col_width) << "Character" << setw
    (age_width) << 123 << "\n";

    //boolalpha and noboolalpha, print bool as 0 or 1
    bool condition1 = true;
    bool condition2 = false;
    cout << boolalpha;
    cout << condition1 << "\n";
    cout << condition2 << "\n";
    cout << noboolalpha;    // <--- THIS IS DEFAULT
    cout << condition1 << "\n";
    cout << condition2 << "\n";

    //showpos, show or hide + sign
    cout << showpos;
    cout << "pos num: " << 12 << "\n";
    cout << "neg num: " << -12 << "\n";
    cout << noshowpos;    // <--- THIS IS DEFAULT

    

    return 0;
}