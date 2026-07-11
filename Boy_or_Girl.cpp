#include <iostream>

using namespace std;

int main()
{
    string ques;
    cin >> ques;
    bool alph[26] = {};
    int size = ques.length();
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (!alph[ques[i]])
        {
            alph[ques[i]] = 1;
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}