#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, mx = 0;
    string s, ans;
    cin >> n;
    map<string, int> m, m2;
    vector<pair<string, int>> v;
    while (n--)
    {
        cin >> s >> a;
        m[s] += a;
        v.push_back(make_pair(s, a));
    }
    for (auto &x : m)
    {
        mx = max(x.second, mx);
    }
    for (auto &x : v)
    {
        m2[x.first] += x.second;
        if (m2[x.first] >= mx && m[x.first] == mx)
        {
            cout << x.first;
            break;
        }
    }
}