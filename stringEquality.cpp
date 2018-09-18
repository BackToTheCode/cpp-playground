#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::getline(std::cin, name);

    std::string name2;
    std::getline(std::cin, name2);

    if (name2 == name)
    {
       std::cout << "Equal\n"; 
    }
    else 
    {
        std::cout << "Different\n";
    }

    std::cout << name << "\n";
    std::cout << name2 << "\n";

    return 0;
}