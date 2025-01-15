#include <iostream>
#include <cmath>    // <--- TOPIC
using namespace std;

int main()
{
    //std::floor == rounds down
    //std::ceil == rounds up
    double weight = 7.7;
    cout << "FLOOR applied to 7.7 is: " << floor(weight) << "\n";
    cout << "CEIL applied to 7.7 is: " << ceil(weight) << "\n";

    //std::abs == absolute value, "removes" sign
    double savings = -5000;
    cout << "ABS applied to -5000 is: " << abs(savings) << "\n";

    //std::exp == f(x) = e^x, where e = 2.71828...
    double exponential = std::exp(10);
    cout << "EXP -- e ^ 10: " << exponential << "\n";

    //std::pow == (arg1)^(arg2)
    cout << "POW -- 2 ^ 5 = " << pow(2,5) << "\n";
    cout << "POW -- 9 ^ 2 = " << pow(9,2) << "\n";

    //std::log == reverse of pow, if 2^3 = 8, log(8 in base)2 = 3
    //(essentially asking "what exponent turns 2 to 8")
    //default log is base e, log10 is base 10
    cout << "LOG -- if e ^ 4 = 54.598, then log(e)54.598 = " << log(54.598) << "\n";
    cout << "LOG 10 -- if 10 ^ 3 = 1000, then log(10)1000 = " << log10(1000) << "\n";

    //std::sqrt == square root of argument
    cout << "SQRT of 64 = " << sqrt(64) << "\n";

    //std::round == decimals rounded up or down
    cout << "ROUND applied to 3.654 is: " << round(3.654) <<"\n";
    cout << "ROUND applied to 2.5 is: " << round(2.5) <<"\n";
    cout << "ROUND applied to 2.4 is: " << round(2.4) <<"\n";

    return 0;
}