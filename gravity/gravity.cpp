#include <iostream>
#include <iomanip>
#include "constants.h"

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters:\n";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

double calculateHeight(double towerHeight, int time)
{
    // Equation for calculating distance when acceleration is constant and time passed is known
    return towerHeight - ((0.5) * constants::my_gravity * time * time);
}

void printHeight(double height, int seconds)
{
    std::cout << std::fixed << std::setprecision(1);

    if (height > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " metres.\n";
    else 
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

int main() 
{

    const int towerHeight = getTowerHeight();

    printHeight(calculateHeight(towerHeight, 1), 1);
    printHeight(calculateHeight(towerHeight, 2), 2);
    printHeight(calculateHeight(towerHeight, 3), 3);
    printHeight(calculateHeight(towerHeight, 4), 4);
    printHeight(calculateHeight(towerHeight, 5), 5);

    return 0;
}