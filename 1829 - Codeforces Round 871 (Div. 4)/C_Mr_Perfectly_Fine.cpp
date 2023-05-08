#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, tt;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        map<string, int> mp;
        mp["01"] = mp["10"] = mp["11"] = 1e6;
        while (n--)
        {
            cin >> tt >> s;
            if (s != "00")
            {
                mp[s] = min(tt, mp[s]);
            }
        }
        if (mp["11"] == 1e6 && mp["01"] + mp["10"] > 1e6)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min(mp["11"], mp["01"] + mp["10"]) << endl;
        }
    }
}