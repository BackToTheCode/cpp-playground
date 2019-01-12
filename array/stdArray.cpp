#include <iostream>
#include <array>
#include <algorithm> // for std::sort

void printLength(const std::array<double, 5> &myArray) // We use const to stop the compiler from copying the array
{
    std::cout << "length: " << myArray.size();

}
 
int main()
{
    std::array<double, 5> myArray { 9.0, 7.2, 5.4, 3.6, 1.8 };
    std::sort(myArray.begin(), myArray.end()); // sort the array forwards
    
    printLength(myArray);

    std::array<int, 5> myArray { 9, 7, 5, 3, 1 };
 
    for (auto &element : myArray)
        std::cout << element << ' '
 
    return 0;
}