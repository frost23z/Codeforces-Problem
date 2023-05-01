#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, q, l, r, k, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        long long a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        while (q--)
        {
            cin >> l >> r >> k;
            ans = a[n] - a[r] + a[l - 1] + k * (r - l + 1);
            ans % 2 ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
}