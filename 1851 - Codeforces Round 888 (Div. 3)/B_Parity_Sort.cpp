#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n], flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != b[i] % 2)
            {
                flag = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
    }
}