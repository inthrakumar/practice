#include <iostream>
#include <string>
using namespace std;
int main()
{
    for (int i = 5; i > 0; i--)
    {
        int u = 5 - i;
        for (int g = 0; g < u; g++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}