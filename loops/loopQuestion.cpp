#include <iostream>
 
int main()
{
    int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    const int length = sizeof(array) / sizeof(array[0]);

    for (int index = 0; index < length; ++index)
        std::cout << array[index] << '\n';

    return 0;
}