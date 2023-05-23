#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == 0 || odd == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            sort(a.begin(), a.end());
            int l_odd, l_even;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    l_odd = i;
                    break;
                }
            }
            if (l_odd == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}