#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, flag;
    char c;
    cin >> t;
    while (t--)
    {
        flag = 0;
        string s;
        cin >> n >> s;
        for (i = 0; i < n; i++)
        {
            c = s[i];
            if (i % 2 && s[i] != '0' && s[i] != '1')
            {
                replace(s.begin(), s.end(), c, '1');
            }
            else if (i % 2 == 0 && s[i] != '0' && s[i] != '1')
            {
                replace(s.begin(), s.end(), c, '0');
            }
        }
        for (i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
}