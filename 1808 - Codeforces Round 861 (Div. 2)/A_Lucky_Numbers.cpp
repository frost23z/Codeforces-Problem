#include <bits/stdc++.h>
using namespace std;
int a[1000001], mn, mx, i, j;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (i = 10; i <= 1000000; i++)
    {
        int x = i;
        mn = 10, mx = 0;
        while (x > 0)
        {
            if (x % 10 < mn)
            {
                mn = x % 10;
            }
            if (x % 10 > mx)
            {
                mx = x % 10;
            }
            x /= 10;
        }
        a[i] = mx - mn;
    }
    int t;
    cin >> t;
    for (j = 1; j <= t; j++)
    {
        int l, r, mxx = 0, ans;
        cin >> l >> r;
        if (r < 10)
        {
            cout << r << endl;
        }
        else
        {
            for (i = l; i <= r; i++)
            {
                if (a[i] >= mxx)
                {
                    ans = i;
                    mxx = a[i];
                }
                if (mxx == 9)
                {
                    ans = i;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}