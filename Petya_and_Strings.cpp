#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int size = s1.length();
    for (int i = 0; i < size; i++)
    {
        if (tolower(s1[i]) > tolower(s2[i]))
        {
            cout << 1;
            break;
        }
        else if (tolower(s1[i]) < tolower(s2[i]))
        {
            cout << -1;
            break;
        }
        else if (i == size - 1)
        {
            cout << 0;
        }
    }

    return 0;
}