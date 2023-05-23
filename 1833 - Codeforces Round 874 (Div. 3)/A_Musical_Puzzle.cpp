#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string s, a;
        cin >> n >> s;
        map<string, int> m;
        for (int i = 0; i < n - 1; i++)
        {
            a = "";
            a += s[i];
            a += s[i + 1];
            m[a]++;
        }
        cout << m.size() << endl;
    }
}