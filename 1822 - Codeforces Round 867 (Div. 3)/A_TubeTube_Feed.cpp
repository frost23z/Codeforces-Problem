#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, n, t;
    cin >> q;
    while (q--)
    {
        cin >> n >> t;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = -1, val = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] + i <= t)
            {
                if (val < b[i])
                {
                    val = b[i];
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl;
    }
}