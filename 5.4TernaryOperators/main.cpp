#include <iostream>
using namespace std;

int main()
{
    //result = (CONDITION) ? ARG1 : ARG2;
    /*
    this is equivalent to this if statement:

    if (CONDITION) {
        result = option1;
    } else {
        result = option2;
    }
    */

    int max;
    
    int a = 20;
    int b = 35;
    
    if(a > b){
    max = a;
    } else {
    max = b;
    }
    cout << "\nusing IF statement, max = " << max << "\n";

    max = 0;

    // if condition is TRUE, then use arg1
    // if condition is FALSE, then use arg2
    // so if a > b == TRUE, assign a to max, if a > b == FALSE, assign b to max
    max = (a > b) ? a : b;
    cout << "\nusing TERNARY OPERATOR statement, max = " << max << "\n";

    // the types of arg1 and arg2 MUST be convertible/comparable
    // e.g., max = (a>b) ? a:"b"; will NOT work

    return 0;
}