#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p1, p2, p3, t1, t2, t, ans = 0;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int l, r;
    cin >> l >> r;
    ans += (r - l) * p1;
    t = r;
    n--;
    while (n--)
    {
        cin >> l >> r;
        ans += (r - l) * p1;
        if (l - t <= t1)
        {
            ans += (l - t) * p1;
        }
        else if (l - t <= t1 + t2)
        {
            ans += t1 * p1 + (l - t - t1) * p2;
        }
        else
        {
            ans += t1 * p1 + t2 * p2 + (l - t - t1 - t2) * p3;
        }
        t = r;
    }
    cout << ans << endl;
}