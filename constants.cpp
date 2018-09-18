#include <iostream>

void printInteger(const int);

int main()
{
    std::cout << "Please enter a single digit:"  << std::endl;
    int x;
    std::cin >> x;
 
    printInteger(x);

    return 0;
}

void printInteger(const int myValue)
{
    std::cout << myValue;
}
