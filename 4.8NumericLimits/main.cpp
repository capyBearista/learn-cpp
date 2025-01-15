#include <iostream>
#include <limits>    // <--- TOPIC
using namespace std;

int main()
{
    /*
    floating point
    minimum == lowest possible POSITIVE number
    maximum == highest positive number
    lowest == lowest negative number

    (signed) integer
    min == -32768, lowest negative number
    max == 32767, highest positive number
    
    (unsigned short) integer
    min == 0, same
    max == 65535, same
    */
    
    // std::numeric_limits<datatype>::min(), ::max(), ::lowest()
    cout << "Range for SHORT is: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max();

    cout << "\n\nRange for UNSIGNED SHORT is " << numeric_limits<unsigned short>::min() << " to " << numeric_limits<unsigned short>::max();

    cout << "\n\nRange for INT is: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max();
    
    cout << "\n\nRange for UNSIGNED INT is: " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max();

    cout << "\n\nRange for FLOAT is: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max();

    cout << "\n\nRange for FLOAT is: " << numeric_limits<short>::lowest() << " to " << numeric_limits<short>::max() << " using ::LOWEST()";

    cout << "\n\nRange for DOUBLE is: " << numeric_limits<double>::lowest() << " to " << numeric_limits<double>::max() << " using ::LOWEST()";

    cout << "\n\nRange for LONG DOUBLE is: " << numeric_limits<long double>::lowest() << " to " << numeric_limits<long double>::max() << " using ::LOWEST()";

    return 0;
}