#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    char *s;
    cin >> s;

    if (!s)
    {
        return 1;
    }

    // char *t = malloc((strlen(s) + 1) * sizeof(char));
    char *t;
    t = (char*) malloc((strlen(s) + 1));

    if (!t)
    {
        return 1;
    }

    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    cout << s << "\n";
    cout << t << "\n";

    return 0;

}