#include <iostream>
 
int main()
{
    std::string array[9] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly", "James" };

    std::string userName = "";
    std::cout << "Please enter your name: ";
    std::cin >> userName;
    
    for (auto &name : array)
        if (name == userName)
        {
            std::cout << "Your name is " << name;
        }
    
    return 0;
}