#include <iostream>
 
double getInt()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter an int value: ";
        int x;
        std::cin >> x;
 
        if (std::cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            std::cin.ignore(32767,'\n'); // and remove the bad input
        }
        else // else our extraction succeeded
            return x; // so return the value we extracted
    }
}

int main()
{    
    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    const int length = sizeof(array) / sizeof(array[0]);

    int userInput = getInt();

    for (int index = 0; index < length; ++index)
        if (array[index] == userInput) 
            std::cout << "This is the index of the integer from the array " << index << '\n';

    return 0;
}