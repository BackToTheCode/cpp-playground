#include <iostream>
#include <string>

int main(void)
{
    char name[256];

    std::cout << "Please, enter your full name: ";
    std::cin.getline (name,256);

    for (int i = 0; i < strlen(name); i++)
    {
        // std::cout << name[i] << "\n";
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            std::cout << static_cast<char>(name[i] - ('a' - 'A')) << "\n";
        }
        else 
        {
            std::cout << name[i] << "\n";
        }
    }

    return 0;
}