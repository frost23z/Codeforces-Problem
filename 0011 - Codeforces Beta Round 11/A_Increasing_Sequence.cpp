#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, d, ans = 0, b;
    cin >> n >> d;
    int a[n];
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i - 1] > a[i])
        {
            b = ceil((a[i - 1] - a[i]) / (d * 1.0));
            ans += b;
            a[i] += b * d;
        }
        if (a[i - 1] == a[i])
        {
            ans++;
            a[i] += d;
        }
    }
    cout << ans << endl;
}