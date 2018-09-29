#include <iostream>
 
int main()
{
    int value = 5; // normal integer
    int &ref = value; // reference to variable value
    int &oddRef = value; // reference to variable value
 
    value = 6; // value is now 6
    ref = 7; // value is now 7
 
    std::cout << value; // prints 7
    ++ref;
    std::cout << value; // prints 8

    std::cout << oddRef << "Test\n"; // prints 8
 
    return 0;
}

// struct Person
// {
//     int age;
//     double weight;
// };
// Person person; // define a person
 
// // Member selection using reference to struct
// Person &ref = person;
// ref.age = 5;

// struct Person
// {
//     int age;
//     double weight;
// };
// Person person;
 
// // Member selection using pointer to struct
// Person *ptr = &person;
// (*ptr).age= 5;