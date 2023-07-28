#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, k, h, ans;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> m >> k >> h;
        int a[n];
        vector<int> v;
        for (int i = 1; i < m; i++)
        {
            v.push_back(k * i);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (binary_search(v.begin(), v.end(), abs(h - a[i])))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}