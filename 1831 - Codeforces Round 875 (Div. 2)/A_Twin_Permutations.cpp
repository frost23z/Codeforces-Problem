#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, mx;
    cin >> t;
    while (t--)
    {
        mx = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = n + 1 - a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}