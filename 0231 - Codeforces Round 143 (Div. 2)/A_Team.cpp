#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count, ans = 0;
    cin >> n;
    int a[3];
    while (n--)
    {
        count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i])
            {
                count++;
            }
        }
        if (count >= 2)
        {
            ans++;
        }
    }
    cout << ans;
}