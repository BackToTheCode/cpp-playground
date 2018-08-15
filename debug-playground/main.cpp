#include "io.h"

int main() 
{
    int x = readNumber();
    int y = readNumber();
    writeAnswer(x + y);
    return 0;
}

// #include <iostream>

// int add(int x, int y);

// int main()
// {

//     int x;
//     x = add(5, 4);
//     // std::cout << "Enter the first number to add: "; 
//     // int x; 
//     // std::cin >> x; 

//     // std::cout << "Enter the second number to add: "; 
//     // int y; 
//     // std::cin >> y; 

//     // std::cout << "The answer is: " << add(x, y) << std::endl;
//     return 0;
// }
// // Takes a two integers and adds them together
// int add(int x, int y) 
// {
//     return x + y;
// }