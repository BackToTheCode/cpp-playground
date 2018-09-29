#include <iostream>
 
int main()
{
    int value = 5;
    int *ptrNormal = { nullptr };
    int *ptr = &value; // initialize ptr with address of variable value
    *ptr = 10;
 
    std::cout << ptrNormal << '\n'; // 
    std::cout << &value << '\n'; // print the address of variable value
    std::cout << ptr << '\n'; // print the address that ptr is holding
    std::cout << *ptr << '\n'; // TEST
    std::cout << value << '\n'; // print the address that ptr is holding
 
    return 0;
}