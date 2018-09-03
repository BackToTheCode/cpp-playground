#include <iostream>
using namespace std;

int sigma(int m);

int main() 
{
    int n;
    do 
    {
        cout << "Please enter an integer: \n";
        cin >> n;
    }
    while (n < 1);
    int answer = sigma(n);
    cout << answer << "\n";
    return 0;
}

int sigma(int m)
{
    if (m == 1)
    {
        return 1;
    }
    return (m + sigma(m - 1));
}