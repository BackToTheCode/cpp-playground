#include <iostream>
 
bool isEven(int x)
{
    return x % 2 == 0;
}

int main()
{
    std::cout << "Please enter a single digit:"  << std::endl;
    int x;
    std::cin >> x;
 
    if (isEven(x)) 
        std::cout << "Number is even\n";
    else 
        std::cout << "Number is not even\n";

    return 0;
}