#include <iostream>
#include <string>
using namespace std;
int main()
{
    int y;
    cout << "enter the number of items \n";
    cin >> y;
    int a[y];
    cout << "enter the elements \n";
    for (int i = 0; i < y; i++)
    {
        cin >> a[i];
    }

    return 0;
}