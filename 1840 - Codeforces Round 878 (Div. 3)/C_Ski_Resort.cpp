#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k, q, z;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> q;
        int a[n + 1], count = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        a[n] = INT_MAX;
        for (int i = 0; i <= n; i++)
        {
            if (a[i] <= q)
            {
                count++;
            }
            else
            {
                if (count >= k)
                {
                    count = count - k + 1;
                    ans += (1LL * count * (count + 1) / 2);
                }
                count = 0;
            }
        }
        cout << ans << endl;
    }
}