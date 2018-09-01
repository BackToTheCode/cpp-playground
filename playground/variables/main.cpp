#include "gravity.h"
#include "constants.h"
#include <iostream>
using namespace std;

// Doesn't destroy s_itemID when function closes
int generateID()
{
    static int s_itemID = 0;
    return s_itemID++; // makes copy of s_itemID, increments the real s_itemID, then returns the value in the copy
}

int main()
{
    cout << "Hello\n";
    cout << Constants::my_gravity << "\n";
    cout << getGravity() << "\n";
    return 0;
}