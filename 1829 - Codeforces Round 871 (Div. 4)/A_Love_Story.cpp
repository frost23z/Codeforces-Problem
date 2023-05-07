#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, b = "codeforces";
    int t, ans;
    cin >> t;
    while (t--)
    {
        cin >> s;
        ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != b[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}