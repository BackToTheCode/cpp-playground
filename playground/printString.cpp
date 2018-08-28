#include <iostream>

int main(void)
{
    char name[16];
    std::cout << "Please, enter your full name: ";
    std::cin.getline (name,16);

    int n = 0;
    while(name[n] != '\0')
    {
        n++;
    }
    std::cout << n << "\n";
}