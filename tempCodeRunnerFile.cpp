#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    bool four = false;
    bool seven = false;
    while (n > 0)
    {
        if ((n % 10 == 4))
        {
            four = true;
        }
        else if ((n % 10 == 7))
        {
            seven = true;
        }
        else if (!(n % 10 == 4 || n % 10 == 7))
        {
            four = false;
            seven = false;
            break;
        }
        n /= 10;
    }
    if (four && seven)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}