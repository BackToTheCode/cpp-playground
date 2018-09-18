#include <iostream>

using namespace std;

void printArray(int* arr, int arr_size);
void mergeSortHelper(int arr[], int lo, int hi);
void merger(int arr[], int lo, int mi, int hi);
void mergeSort(int arr[], int arr_size);

int main ()
{

    int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
    int size = (sizeof(array)/sizeof(array[0]));

    std::cout << "Before Merge Sort :" << std::endl;
    printArray(array, size);
    
    mergeSort(array, size);
    
    std::cout << "After Merge Sort :" << std::endl;
    printArray(array, size);

    return 0;
}

void merger(int arr[], int lo, int mi, int hi)
{
    int *temp = new int[hi - lo + 1];

    int left = lo, right = mi + 1;
    int k = 0; // For temp array
    while (left <= mi && right <= hi) {
        if (arr[left] <= arr[right])
            temp[k++] = arr[left++];
        else 
            temp[k++] = arr[right++];
    }

    while (left <= mi)
        temp[k++] = arr[left++];

    while (right <= hi)
        temp[k++] = arr[right++];

    int i;
    // for(k = 0, i = lo; i <= hi; ++i, ++k)
    for (k = 0, i = lo; i <= hi; ++i, ++k)
        arr[i] = temp[k];
        
    delete []temp;
}

void mergeSortHelper(int arr[], int lo, int hi)
{
    int mi;
    if (lo < hi)
    {
        mi = (lo + hi) >> 1;
        mergeSortHelper(arr, lo, mi);
        mergeSortHelper(arr, mi + 1, hi);
        merger(arr, lo, mi, hi);
    }
}

void mergeSort(int arr[], int arr_size)
{
    mergeSortHelper(arr, 0, arr_size - 1);
}

void printArray(int* arr, int arr_size)
{
    for (int i=0; i < arr_size; i++)
        if (i < arr_size - 1)
            cout << arr[i] << ", ";
        else 
            cout << arr[i] << "\n";
}