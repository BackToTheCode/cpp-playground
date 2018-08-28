#include <iostream>
#include <bitset>

int main()
{
    using namespace std;
    // Define 8 separate bit flags (these can represent whatever you want)
    const unsigned char option0 = 0b00000001; // represents bit 0
    const unsigned char option1 = 0b00000010; // represents bit 1
    const unsigned char option2 = 0b00000100; // represents bit 2 
    const unsigned char option3 = 0b00001000; // represents bit 3
    const unsigned char option4 = 0b00010000; // represents bit 4
    const unsigned char option5 = 0b00100000; // represents bit 5
    const unsigned char option6 = 0b01000000; // represents bit 6
    const unsigned char option7 = 0b10000000; // represents bit 7

    unsigned char myflags = 0; // all bits turned off to start

    myflags |= (option4 | option5); // turn options 4 and 5 on at the same time
    bitset<8> x(myflags);
    cout << x << endl;

    myflags &= ~option4; 
    bitset<8> y(myflags);
    cout << y << endl;
    
    return 0;
}