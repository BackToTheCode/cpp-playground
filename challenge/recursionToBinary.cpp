#include <iostream>
#include <string> 

using namespace std;

string convertToBinary(int num, string str) 
{
    if (num < 1)
    {
        return str.append("");
    }

    str.append(to_string(num % 2));
    return convertToBinary((num / 2), str);
    
}

int main() {

    string binaryRep;
    binaryRep = convertToBinary(10, binaryRep);

    cout << "Result: " << binaryRep << "\n";

    return 0;
}