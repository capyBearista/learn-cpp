#include <iostream>
#include <iomanip>    // <--- TOPIC
using namespace std;

int main()
{
    int col_width = 15;
    int age_width = 7;

    cout << setw(col_width) << "Last Name" << setw(col_width) << "First Name" << setw(age_width) << "Age" << "\n";

    cout << setw(col_width) << "Doe" << setw(col_width) << "John" << setw(age_width) << "30" << "\n";
    cout << setw(col_width) << "Doez" << setw(col_width) << "Jane" << setw(age_width) << "30" << "\n";
    
    // std::left
    cout << left;
    cout << setw(col_width) << "Left" << setw(col_width) << "Justif" << setw(age_width) << "0" << "\n";
    cout << right;    // <--- THIS IS DEFAULT

    cout << endl;
    // std::internal == sign is LEFT justified : number is RIGHT justified
    cout << internal;
    cout << setw(col_width) << "Internal" << setw(col_width) << "Justif" << setw(age_width) << 45.6 << "\n";
    cout << setw(col_width) << "Internal" << setw(col_width) << "Justif" << setw
    (age_width) << -45.6 << "\n";

    cout << endl;
    // std::setfil()
    cout << right;
    cout << setfill('*');
    cout << setw(col_width) << "Fill" << setw(col_width) << "Character" << setw(age_width) << 123 << "\n";
    cout << setfill(' ');
    cout << setw(col_width) << "BlankFill" << setw(col_width) << "Character" << setw
    (age_width) << 123 << "\n";

    cout << endl;
    // std::boolalpha, ::noboolalpha : print bool as 0 or 1
    bool condition1 = true;
    bool condition2 = false;
    cout << boolalpha;
    cout << condition1 << "\n";
    cout << condition2 << "\n";
    cout << noboolalpha;    // <--- THIS IS DEFAULT
    cout << condition1 << "\n";
    cout << condition2 << "\n";

    cout << endl;
    // std::showpos == show '+' sign
    cout << showpos;
    cout << "pos num: " << 12 << "\n";
    cout << "neg num: " << -12 << "\n";
    cout << noshowpos;    // <--- THIS IS DEFAULT

    cout << endl;
    // std::dec, ::hex, ::oct == display in respective number system
    // std::showcase == shows WHICH number system
    // std::uppercase == self-explanatory
    int pos_int = 121212;
    cout << showbase;
    cout << uppercase;
    cout << "pos_int (dec) = " << dec << pos_int << "\n";
    cout << "pos_int (hex) = " << hex << pos_int << "\n";
    cout << "pos_int (oct) = " << oct << pos_int << "\n";
    cout << noshowbase;    // <--- THIS IS DEFAULT
    cout << nouppercase;    // <--- THIS IS DEFAULT

    // std::setprecision == sets amount of digits printed for floating point
    double a = 3.1415926535897932384626433832795028841971693993751058;
    cout << a << "\n";
    cout << setprecision(10) << a << "\n";
    cout << setprecision(20) << a << "\n";
    cout << setprecision(6);    // <--- THIS IS DEFAULT

    return 0;
}