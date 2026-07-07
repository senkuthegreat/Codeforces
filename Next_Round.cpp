#include <iostream>

using namespace std;

int main()
{
    int n, k, a, b = 0, ans = 0;
    cin >> n >> k;
    while (n--)
    {
        cin >> a;
        if (k <= 0 && a < b)
        {
            break;
        }
        if (a > 0)
        {
            ans++;
        }
        b = a;
        k--;
    }
    cout << ans;

    return 0;
}