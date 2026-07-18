#include <iostream>

using namespace std;

int main()
{
    int small = 0, big = 0;
    string s;
    cin >> s;
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (s[i] < 97)
        {
            big++;
        }
        else
            small++;
    }
    if (big > small)
    {
        for (int i = 0; i < size; i++)
        {
            if (s[i] >= 97)
                s[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (s[i] < 97)
                s[i] += 32;
        }
    }
    cout << s;

    return 0;
}