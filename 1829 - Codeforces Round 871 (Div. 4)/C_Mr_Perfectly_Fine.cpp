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
        int ans = 0, mn1, mn2, mnb;
        mn1 = mn2 = mnb = INT_MAX;
        vector<pair<int, string>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> tt >> s;
            if (s != "00")
            {
                v.push_back(make_pair(tt, s));
            }
        }
        if (v.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second == "11")
            {
                mnb = min(mnb, v[i].first);
            }
            else if (v[i].second == "10")
            {
                mn1 = min(mn1, v[i].first);
            }
            else
            {
                mn2 = min(mn2, v[i].first);
            }
        }
        if (mn1 + mn2 < mnb && mn1 != INT_MAX && mn2 != INT_MAX)
        {
            cout << mn1 + mn2 << endl;
        }
        else if (mnb == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mnb << endl;
        }
    }
}