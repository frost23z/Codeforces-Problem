#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, m = 0;
    string s[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> s[i];
        if (s[i] == "BBBBBBBB")
        {
            n++;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (s[j][i] == 'B')
            {
                m++;
            }
        }
        m == 8 ? n++, m = 0 : m = 0;
    }
    n == 16 ? cout << n / 2 : cout << n;
}