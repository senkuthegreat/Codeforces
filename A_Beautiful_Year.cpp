#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y++;
        int o = y % 10;
        int t = (y / 10) % 10;
        int h = (y / 100) % 10;
        int th = (y / 1000);
        if ((o != t) && (o != h) && (o != th) && (t != h) && (t != th) && (h != th))
        {
            cout << y;
            return 0;
        }
    }
}