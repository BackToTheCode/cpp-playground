#include <iostream>
#include "modules/add.h"

// int add(int x, int y);

int main()
{
    std::cout << "Enter the first number to add: "; 
    int x; 
    std::cin >> x; 

    std::cout << "Enter the second number to add: "; 
    int y; 
    std::cin >> y; 

    std::cout << "The answer is: " << add(x, y) << std::endl;
    return 0;
}