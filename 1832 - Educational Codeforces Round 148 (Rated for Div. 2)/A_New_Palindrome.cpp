#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        bool flag = 1;
        for (int i = 0; i < (n / 2) - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
}