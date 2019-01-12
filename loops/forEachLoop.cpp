#include <iostream>
 
int main()
{
    // int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    // for (int number : fibonacci) // iterate over array fibonacci
    //    std::cout << number << ' '; // we access the array element for this iteration through variable number
 
    int array[5] = { 9, 7, 5, 3, 1 };
    for (const auto element: array) // element is a const reference to the currently iterated array element
        std::cout << element << ' ';

    return 0;
}



// It's better to use const auto &element as a reference because then element is not a copy. More efficient.