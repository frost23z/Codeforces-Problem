#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, mx = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], ans = 0, b = 0;
        mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (!a[i])
            {
                b++;
            }
        }
        if (n == 1)
        {
            if (!a[0])
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1] && a[i] == 0)
            {
                ans++;
                mx = max(ans + 1, mx);
            }
            else if (b)
            {
                ans = 0;
                mx = max(1, mx);
            }
            else
            {
                ans = 0;
            }
        }
        cout << mx << endl;
    }
}