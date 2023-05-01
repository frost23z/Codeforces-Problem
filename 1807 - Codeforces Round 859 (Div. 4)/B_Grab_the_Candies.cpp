#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int e = 0, o = 0;
        while (n--)
        {
            cin >> a;
            a % 2 == 0 ? e += a : o += a;
        }
        e > o ? cout << "YES" << endl : cout << "NO" << endl;
    }
}