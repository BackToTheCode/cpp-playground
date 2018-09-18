#include <iostream>
using namespace std;

void bubbleSort(int* array, int size)
{
    bool swapped = false;
    do
    {
        swapped = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);
}

void printArray(int* array, int size)
{
    
    for (int i = 0; i < size - 1; i++)
    {
        if (i < size - 2) 
        {
            
            cout << array[i] << ", ";
        }
        else 
        {
            cout << array[i] << "\n";
        }
            
    }
}

int main()
{
    int array[] = {34, 203, 3, 746, 200, 984, 198, 764, 9};
    int size = (sizeof(array)/sizeof(array[0]));

    bubbleSort(array, size);
    printArray(array, size);
    return 0;
}

// IMPERATIVE

// var a = [34, 203, 3, 746, 200, 984, 198, 764, 9];

// function bubbleSort(a)
// {
//     var swapped;
//     do {
//         swapped = false;
//         for (var i=0; i < a.length-1; i++) {
//             if (a[i] > a[i+1]) {
//                 var temp = a[i];
//                 a[i] = a[i+1];
//                 a[i+1] = temp;
//                 swapped = true;
//             }
//         }
//     } while (swapped);
// }

// bubbleSort(a);
// console.log(a);