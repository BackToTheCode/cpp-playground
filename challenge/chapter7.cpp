#include <iostream>

// 1. A function named max() that takes two doubles and returns the larger of the two.

// double max(double a, double b);

// 2. A function named swap() that swaps two integers.

// void swap(int &a, int &b)
// {
//     int temp;
//     temp = b;
//     b = a;
//     a = temp;
// }

// int main() 
// {
//     int a = 5;
//     int b = 6;

//     swap(a, b);

//     std::cout << "a: " << a << "\n";
//     std::cout << "b: " << b << "\n";

// }

// 3. A function named getLargestElement() that takes a dynamically allocated array of integers and returns the largest number in such a way that the caller can change the value of the element returned (don’t forget the length parameter).

&int function getLargestElement(int *arr, int length)

// 4. What’s wrong with these programs?

// Returns a reference to a variable that will be destroyed once doSomething() terminates
// int& doSomething()
// {
//     int array[] = { 1, 2, 3, 4, 5 };
//     return array[3];
// }

// 5. What’s wrong with these programs?

// No base case
int sumTo(int value)
{
    return value + sumTo(value - 1);
}

// 6. What’s wrong with these programs?

// The two divide functions are not distinct, as they have the same name and same parameters. There is also a potential divide by 0 issue.
float divide(float x, float y)
{
    return x / y;
}

double divide(float x, float y)
{
    return x / y;
}

// 7. What’s wrong with these programs?
#include <iostream>
 
// The array is too large to be allocated on the stack. It should be dynamically allocated.
int main()
{
    int array[100000000];
 
    for (const auto &x: array)
        std::cout << x << ' ';
 
    return 0;
}

// 8. What’s wrong with these programs?
#include <iostream>
 
// No checking to see whether anything has been entered for age or validation that it is an integer
// And if does exist argv[1] cannot be implicitly converted to an int via assignment
int main(int argc, char *argv[])
{
    int age = argv[1]
    std::cout << "The users age is " << age << '\n';
 
    return 0;
}