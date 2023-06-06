#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string s, a = "";
        char ch;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    a += s[i];
                    i = j;
                    break;
                }
            }
        }
        cout << a << endl;
    }
}