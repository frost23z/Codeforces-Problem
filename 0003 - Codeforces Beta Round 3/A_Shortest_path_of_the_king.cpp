#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    vector<string> v;
    while (s != t)
    {
        if (t[0] - s[0] > 0 && s[1] - t[1] > 0)
        {
            t[0]--;
            s[1]--;
            v.push_back("RD");
        }
        if (t[0] - s[0] > 0 && t[1] - s[1] > 0)
        {
            t[0]--;
            t[1]--;
            v.push_back("RU");
        }
        if (s[0] - t[0] > 0 && s[1] - t[1] > 0)
        {
            s[0]--;
            s[1]--;
            v.push_back("LD");
        }
        if (s[0] - t[0] > 0 && t[1] - s[1] > 0)
        {
            s[0]--;
            t[1]--;
            v.push_back("LU");
        }
        if (s[0] == t[0] && s != t)
        {
            if (s[1] - t[1] > 0)
            {
                s[1]--;
                v.push_back("D");
            }
            else
            {
                t[1]--;
                v.push_back("U");
            }
        }
        if (s[1] == t[1] && s != t)
        {
            if (s[0] - t[0] > 0)
            {
                s[0]--;
                v.push_back("L");
            }
            else
            {
                t[0]--;
                v.push_back("R");
            }
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}