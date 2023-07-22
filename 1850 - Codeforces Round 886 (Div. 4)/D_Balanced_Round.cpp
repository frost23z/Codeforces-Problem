#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(a, a + n);
        int ans = 0, b = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                b++;
                if (i == n - 1)
                {
                    ans = max(ans, b + 1);
                }
            }
            else
            {
                ans = max(ans, b + 1);
                b = 0;
            }
        }
        cout << n - ans << endl;
    }
}