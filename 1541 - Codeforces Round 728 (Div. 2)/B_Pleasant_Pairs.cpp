#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n;
        long long ans = 0;
        vector<pair<long long, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            a[i] = {b, i + 1};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i].first * a[j].first > 2 * n)
                {
                    break;
                }
                if (a[i].first * a[j].first == a[i].second + a[j].second)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}