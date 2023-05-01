#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        long long ans = 0;
        cin >> n;
        ans += n * 5;
        ans += (long long)(n - 2) * (n - 1);
        cout << ans << endl;
    }
}