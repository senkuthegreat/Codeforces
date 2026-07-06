#include <iostream>

using namespace std;

int main()
{
    int noOfLines, x = 0;
    cin >> noOfLines;
    string operation;
    while (noOfLines--)
    {
        cin >> operation;
        if (operation[1] == '+')
            x++;
        else
            x--;
    }
    cout << x;

    return 0;
}