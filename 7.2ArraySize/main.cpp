#include <iostream>
using namespace std;

int main()
{
    int scores[] = {10, 12, 15, 11, 19, 17, 22, 23 ,24};

    // std::size(array) == returns size of array
    cout << "scores[] element count: " << size(scores) << "\n";

    for (size_t i = 0; i < size(scores); i++) {
        cout << "scores[" << i << "] = " << scores[i] << "\n";
    }

    cout << "\n";

    // sizeof(array) == outdated method of calculating array size
    // this calculates the size in MEMORY in bytes (so for an int array, it would be the amount of elements * 4 bytes per element)

    // total size in bytes of the array
    cout << "Size of scores[] (in bytes): " << sizeof(scores) << "\n";
    // size of one element
    cout << "Size of scores[0]: " << sizeof(scores[0]) << "\n";
    // total size / size of one element = number of elements
    cout << "scores[] element count: " << sizeof(scores) / sizeof(scores[0]) << "\n";

    size_t count {sizeof(scores) / sizeof(scores[0])};
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum += scores[i];
    }
    cout << "Sum = " << sum;

    return 0;
}