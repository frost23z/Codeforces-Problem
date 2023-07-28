#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, b, c, h;
    cin >> t;
    while (t--)
    {
        cin >> b >> c >> h;
        c += h;
        if (c == b - 1)
        {
            cout << b + c << endl;
        }
        else if (b == c)
        {
            cout << b + c - 1 << endl;
        }
        else if (b < c)
        {
            cout << (2 * b) - 1 << endl;
        }
        else if (b > c)
        {
            cout << (2 * c) + 1 << endl;
        }
    }
}