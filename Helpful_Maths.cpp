#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int lens = s.length();
    std::vector<int> arr(0);
    for (int i = 0; i < lens; i++)
    {
        if (i % 2 == 0)
            arr.push_back(s[i]);
    }
    std::sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < lens; i++)
    {
        if (i % 2 == 0)
        {
            s[i] = arr.back();
            arr.pop_back();
        }
    }
    cout << s;
    return 0;
}