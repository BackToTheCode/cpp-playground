#include <iostream>

// Forward declaration of doubleNum so compilers know it exists
int doubleNum(int x); 

int main()
{
    std::cout << "Enter a number: "; 
    int x; 
    std::cin >> x; 
    std::cout << "The answer is: " << doubleNum(x) << std::endl;
    return 0;
}

// Takes a single integer input and doubles it
int doubleNum(int x) 
{
    return x * x;
}