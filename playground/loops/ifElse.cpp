#include <iostream>
#

int main(){

    int x, y;
    std::cin >> x;
    std::cin >> y;


    if (x < y)
    {
        std::cout << "x is less than y\n";
    }
    else if (x > y)
    {
       std::cout << "x is greater than y\n"; 
    }
    else 
    {
        std::cout << "x is equal to y\n"; 
    }

    return 0;
}

