#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p, a1, a2;
    int f = 0, b = 0, pos = 0;
    cin >> p >> a1 >> a2;
    while (p.substr(pos, a1.size()) != a1 && p[pos + a1.size() - 1] != '\0' && pos < p.size())
    {
        pos++;
    }
    if (p.substr(pos, a1.size()) == a1)
    {
        f++;
        pos += a1.size();
    }
    while (p.substr(pos, a2.size()) != a2 && p[pos + a2.size() - 1] != '\0' && pos < p.size())
    {
        pos++;
    }
    if (p.substr(pos, a2.size()) == a2)
    {
        f++;
    }
    pos = 0;
    reverse(p.begin(), p.end());
    while (p.substr(pos, a1.size()) != a1 && p[pos + a1.size() - 1] != '\0' && pos < p.size())
    {
        pos++;
    }
    if (p.substr(pos, a1.size()) == a1)
    {
        b++;
        pos += a1.size();
    }
    while (p.substr(pos, a2.size()) != a2 && p[pos + a2.size() - 1] != '\0' && pos < p.size())
    {
        pos++;
    }
    if (p.substr(pos, a2.size()) == a2)
    {
        b++;
    }
    if (f == 2 && b == 2)
    {
        cout << "both";
    }
    else if (f == 2)
    {
        cout << "forward";
    }
    else if (b == 2)
    {
        cout << "backward";
    }
    else
    {
        cout << "fantasy";
    }
}