#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long ans = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] -= i + 1;
            m[a[i]]++;
        }
        for (auto &i : m)
        {
            ans += ((1LL * i.second) * (1LL * i.second - 1)) / 2;
        }
        cout << ans << endl;
    }
}