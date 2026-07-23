#include <iostream>

using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h;
    int ans = 0;
    while (n--)
    {
        cin >> x;
        if (x > h)
            ans++;
        ans++;
    }
    cout << ans;
    return 0;
}