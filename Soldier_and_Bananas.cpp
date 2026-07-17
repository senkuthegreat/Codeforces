#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double k, n, w;
    cin >> k >> n >> w;
    cout << max(int((k * ((1 + w) * w / 2)) - n), 0);
    return 0;
}