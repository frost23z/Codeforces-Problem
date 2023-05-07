#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ans = 0;
    map<string, int> m;
    while (getline(cin, s))
    {
        if (s[0] == '+')
        {
            s.erase(s.begin());
            m[s]++;
        }
        else if (s[0] == '-')
        {
            s.erase(s.begin());
            m.erase(s);
        }
        else
        {
            while (s[0] != ':')
            {
                s.erase(s.begin());
            }
            s.erase(s.begin());
            ans += m.size() * s.size();
        }
    }
    cout << ans;
}