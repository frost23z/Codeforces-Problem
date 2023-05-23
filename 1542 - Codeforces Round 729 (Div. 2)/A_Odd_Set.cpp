#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        int odd = 0, even = 0;
        n *= 2;
        while (n--)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd == even)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}