#include <iostream>

using namespace std;

int main()
{
    int a, i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cin >> a;
            if (a == 1)
            {
                break;
            }
        }
        if (a == 1)
        {
            break;
        }
    }
    cout << abs(i - 3) + abs(j - 3);

    return 0;
}