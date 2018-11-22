#include<iostream>
int main(){
    char* pc = new char('A');
    char** ptr = &pc; 
    // char* pc = new char('A');
    // char pc = 'a';
    // char* c = (char *) &pc;
    std::cout << **ptr << "\n";
    // std::cout << *pc << "\n";
    // *c = 'B';
    // std::cout << *pc << "\n";
}