// Things to check for:
// - Are the parameters used correct
// - Is the return value correct
// - Is user input correct

#include <iostream>
#include <string>
 
int main()
{
    std::string hello = "Hello, world!";
    int index;
 
    do
    {
        std::cout << "Enter an index: ";
        std::cin >> index;
 
        //handle case where user entered a non-integer
        //checks whether the value entered into a variable fits its type    
        if (std::cin.fail())
        {
            std::cin.clear(); // reset any error flags
            std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer
            index = -1; // ensure index has an invalid value so the loop doesn't terminate
            continue; // this continue may seem extraneous, but it explicitly signals an intent to terminate this loop iteration...
        }
 
        // ...just in case we added more stuff here later
 
    } while (index < 0 || index >= hello.size()); // handle case where user entered an out of range integer
 
    std::cout << "Letter #" << index << " is " << hello [index] << std::endl;
 
    return 0;
}