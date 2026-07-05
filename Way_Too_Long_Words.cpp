#include <iostream>

using namespace std;

int main()
{
    int inp;
    cin >> inp;
    while (inp--)
    {
        string input;
        cin >> input;
        int length = input.length();
        if (length > 10)
        {
            cout << input[0] << length - 2 << input[length - 1] << endl;
        }
        else
        {
            cout << input << endl;
        }
    }
    return 0;
}
