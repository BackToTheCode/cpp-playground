#include <iostream>

int readNumber()
{
    std::cout << "Enter a number: " << std::endl;
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is: " << x << std::endl;
}