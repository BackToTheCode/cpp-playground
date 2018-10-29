#include <cassert> // for assert()
#include <array>
#include <iostream>

int getArrayValue(const std::array<int, 10> &array, int index)
{
    // we're asserting that index is between 0 and 9
    assert(index >= 0 && index <= 9 && "This message will also print out when expression resolves to false"); // this is line 6 in Test.cpp
 
    return array[index];
}

int main () {

    std::array<int, 10> myArray {1,2,3,4,5,6,7,8,9,10};
    int arrayVal {0};

    arrayVal = getArrayValue(myArray, 11);
    std::cout << arrayVal << "\n"; 

    return 0;
}