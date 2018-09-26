#include <iostream>


int main()
{
    int *value = new (std::nothrow) int; // value will be set to a null pointer if the integer allocation fails
    if (!value) // handle case where new returned null
    {
        // Do error handling here
        std::cout << "Could not allocate memory";
    }
    int *ptr = new int;
    *ptr = 7;

    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";
    
    delete ptr; // return the memory pointed to by ptr to the operating system
    ptr = nullptr; // set ptr to be a null pointer (use nullptr instead of 0 in C++11)

    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";

    return 0;
}