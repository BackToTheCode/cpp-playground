
#include <iostream>

int main() {
    int value = 5;
    
    int *ptr = &value;
    std::cout << ptr << "\n"; // dereference pointer to int to get int value
    std::cout << *ptr << "\n"; // dereference pointer to int to get int value
    
    std::cout << "--------\n";

    int **ptrptr = &ptr;
    std::cout << ptrptr << "\n"; // first dereference to get pointer to int, second dereference to get int value
    std::cout << *ptrptr << "\n"; // first dereference to get pointer to int, second dereference to get int value
    std::cout << **ptrptr << "\n"; // first dereference to get pointer to int, second dereference to get int value

    return 0;
}

