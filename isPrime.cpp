#include <iostream>
 
int main()
{
    std::cout << "Please enter a single digit:"  << std::endl;
    int x;
    std::cin >> x;
 
    if (x == 3 || x == 5 || x == 2 || x == 7) 
        std::cout << "Number is prime\n";
    else 
        std::cout << "Number is not prime\n";

    return 0;
}