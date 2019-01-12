// void doSomething(bool earlyExit)
// {
//     int *array = new int[5] { 9, 7, 5, 3, 1 };
 
//     if (earlyExit)
//         return;
 
//    // do stuff here
 
//     delete[] array; // never called
// }

#include <vector>
#include <iostream>
 
int main()
{
    std::vector<int> array { 9, 7, 5, 3, 1 };
    std::cout << "The length is: " << array.size() << '\n';
 
    return 0;
}

#include <vector>
#include <iostream>
 
int main()
{
    std::vector<int> array { 0, 1, 2 };
    array.resize(5); // set size to 5
 
    std::cout << "The length is: " << array.size() << '\n';
 
    for (auto const &element: array)
        std::cout << element << ' ';
 
    return 0;
}