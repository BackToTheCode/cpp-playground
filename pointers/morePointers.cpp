#include <iostream>

void changeArray(int *ptr)
{
    *ptr = 5;
}

void changeArrayProperly(int *array)
{
    std::cout << "Array: " << array << '\n';
    array[1] = 100;
}

int main()
{
    int array[] = { 1, 1, 2, 3, 5, 8, 13};
    
    std::cout << "Element 0 has value: " << array[0] << '\n';

    std::cout << "Array_before: " << array << '\n';

    changeArray(array);
    changeArrayProperly(array);

    std::cout << "Element 0 has value: " << array[0] << '\n';
    std::cout << "Element 1 has value: " << array[1] << '\n';
    std::cout << "Array_after: " << array << '\n';

    return 0;
}