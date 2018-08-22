#include <iostream>
#include <cstdio>

int main(){

    char myString [255];
    fgets(myString, 255, stdin);
    printf("%s", myString);
   
    return 0;
}

