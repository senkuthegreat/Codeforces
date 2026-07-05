#include <iostream>

using namespace std;

int main()
{
    int NoOfLines;
    cin >> NoOfLines;
    int solved = 0;
    for (int i = 0; i < NoOfLines; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int sum = x + y + z;
        if (sum >= 2)
        {
            solved++;
        }
    }
    cout << solved;

    return 0;
}