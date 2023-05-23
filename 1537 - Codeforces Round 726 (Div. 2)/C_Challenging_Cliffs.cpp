#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, z, diff = INT_MAX;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (diff > a[i + 1] - a[i])
            {
                diff = a[i + 1] - a[i];
                x = i;
                y = i + 1;
            }
        }
        cout << a[x] << " ";
        for (int i = y + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i < x; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[y] << endl;
    }
}