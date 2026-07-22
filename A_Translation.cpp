#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int size = s.length();
    int sizet = t.length();
    if (size != sizet)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (s[i] != t[size - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}