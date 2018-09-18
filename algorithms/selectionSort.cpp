#include <algorithm> // for std::swap, use <utility> instead if C++11
#include <iostream>
 
int main()
{
    const int length = 5;
    int array[length] = { 30, 50, 20, 10, 40 };

    for (int startIndex = 0; startIndex < length; startIndex++)
    {
        int smallestIndex = startIndex;

        for (int index = startIndex; index < length; index++)
        {
            if(array[index] < array[smallestIndex])
            {
                smallestIndex = index;
            }
        }

        int temp = array[startIndex];
        array[startIndex] = array[smallestIndex];
        array[smallestIndex] = temp;
    }

    for (int printIndex = 0; printIndex < length; ++printIndex)
		std::cout << array[printIndex] << ' ';
 
	return 0;
}