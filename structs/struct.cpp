#include <iostream>
#include <string>
using namespace std;

struct Employee 
{
    short id;
    int age;
    double wage;
};

Employee james;

Employee anna = { 1, 25, 60000.0 };

typedef int numberOfEmployees_t;

numberOfEmployees_t sumEmployees(Employee Employees[])
{
    // return sizeof(Employees)/sizeof(Employees[0])
    return 0;
};

int main()
{
    struct Employee Employees[] = {{},{},{}};
    
    james.id = 25;
    james.age = 31;

    cout << sizeof(Employees)/sizeof(Employees[0]) << "\n";
    cout << james.id << "\n";
    cout << james.age << "\n";

    return 0;
};