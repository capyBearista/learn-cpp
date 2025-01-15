#include <iostream>
using namespace std;

int main()
{
    // declaring AND initializing values in an array at the same time

    // don't need a value between [] brackets
    double grades[] = {80.5, 92.23, 68.4, 97.8, 74.75};

    for (size_t i = 0; i < 5; i++) {
        cout << "\ngrades[" << i << "] = " << grades[i];
    }

    // trying to access element outside of the array will result in junk value
    cout << "\ngrades[5] = " << grades[5];

    cout << "\n";
    // array has 3 elements, only 2 initialized
    // since last element was uninitialized, it is initialized with value 0
    int testArr[3] = {0, 1};
    cout << "\ntestArr[0] = " << testArr[0];
    cout << "\ntestArr[1] = " << testArr[1];
    cout << "\ntestArr[2] = " << testArr[2];

    // constant arrays, cannot be modified
    const int multipliers[] = {5, 10, 15};
    // multipliers[1] = 10; would NOT work

    cout << "\n";
    // operations can be performed with data stored in an array
    int addends[] = {10, 20, 30, 40};    // sum is 100
    int sum = 0;
    // 'for (int x : array)' will cycle through each element of the array, where x represents each element
    for (int element : addends) {
        sum += element;
    }
    cout << "\n(using for-each loop) sum = " << sum;
   
    // the for loop version of the for-each loop above would be...
    sum = 0;
    // need to calculate size of the array
    int n = sizeof(addends) / sizeof(addends[0]);

    for (int i = 0; i < n; i++) {
        sum += addends[i];
    }
    cout << "\n(using for loop) sum = " << sum;

    return 0;
}