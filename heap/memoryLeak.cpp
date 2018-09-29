void doSomething()
{
    // When this program exits the pointer to the dynamic memory address is lost and cannot be deleted
    // This creates memory leak over time until the OS cleans it up
    int *ptr = new int;
}


// Similar a pointer here is reassigned. Not the address is lost. More leak.
int value = 5;
int *ptr = new int; // allocate memory
ptr = &value; // old address lost, memory leak results

// Do this instead
int value = 5;
int *ptr = new int; // allocate memory
delete ptr; // return memory back to operating system
ptr = &value; // reassign pointer to address of value