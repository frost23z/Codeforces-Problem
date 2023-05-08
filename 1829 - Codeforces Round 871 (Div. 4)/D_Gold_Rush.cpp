#include <bits/stdc++.h>
using namespace std;
bool split(int n, int m)
{
    if (n == m)
    {
        return true;
    }
    else if (n % 3 || n < m)
    {
        return false;
    }
    else
    {
        return (split(n / 3, m) || split((n / 3) * 2, m));
    }
}
int main()
{
    int t, n, m, a, z;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (split(n, m))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}