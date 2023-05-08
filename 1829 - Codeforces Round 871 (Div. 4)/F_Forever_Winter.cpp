#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        map<int, vector<int>> mp;
        while (m--)
        {
            cin >> a >> b;
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        map<int, int> mp1;
        for (auto &i : mp)
        {
            mp1[i.second.size()]++;
        }
        int ans = 0;
        if (mp1.size() == 1)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        if (mp1.size() == 3)
        {
            for (auto &i : mp1)
            {
                if (i.second == 1)
                {
                    ans = i.first;
                }
                else if (i.second != 1 && i.first == 1)
                {
                    a = i.second;
                }
                else
                {
                    b = i.second;
                }
            }
            cout << ans << " " << a / b << endl;
            continue;
        }
        else
        {
            for (auto &i : mp1)
            {
                if (i.first == 1)
                {
                    a = i.second;
                }
                else
                {
                    ans = i.first;
                    b = i.second - 1;
                }
            }
            cout << ans << " " << a / b << endl;
            continue;
        }
    }
}