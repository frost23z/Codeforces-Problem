#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        int ans = 0, cnt = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if (a <= 10)
            {
                if (cnt < b)
                {
                    cnt = max(cnt, b);
                    ans = i;
                }
            }
        }
        cout << ans << endl;
    }
}