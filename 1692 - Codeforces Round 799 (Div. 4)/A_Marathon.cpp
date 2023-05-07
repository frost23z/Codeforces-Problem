#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
        {
            ans++;
        }
        if (a < c)
        {
            ans++;
        }
        if (a < d)
        {
            ans++;
        }
        cout << ans << endl;
    }
}