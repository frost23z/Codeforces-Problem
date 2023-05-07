#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, w, d, l = 6, gd;
    cin >> y >> w;
    d = max(y, w);
    d = 6 - d + 1;
    gd = gcd(d, l);
    d /= gd, l /= gd;
    cout << d << '/' << l;
}