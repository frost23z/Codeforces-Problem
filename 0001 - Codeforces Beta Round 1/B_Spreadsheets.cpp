#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, r, c, j;
    cin >> t;
    string s, x;
    while (t--)
    {
        cin >> s;
        j = 0;
        for (i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                j++;
            }
        }
        if (s[0] == 'R' && isdigit(s[1]) && j == 2)
        {
            c = 0;
            s.erase(s.begin());
            j = 0;
            while (s[s.size() - 1] != 'C')
            {
                c += (s[s.size() - 1] - '0') * pow(10, j);
                s.pop_back();
                j++;
            }
            s.pop_back();
            x.clear();
            while (c)
            {
                if (c % 26)
                {
                    x += ((c % 26) + 'A' - 1);
                    c /= 26;
                }
                else
                {
                    x += (25 + 'A');
                    c = (c / 26) - 1;
                }
            }
            reverse(x.begin(), x.end());
            x += s;
            cout << x << endl;
        }
        else
        {
            j = 0;
            r = 0, c = 0;
            while (isdigit(s[s.size() - 1]))
            {
                r += (s[s.size() - 1] - '0') * pow(10, j);
                s.pop_back();
                j++;
            }
            j = 0;
            while (isalpha(s[s.size() - 1]))
            {
                c += (s[s.size() - 1] - 'A' + 1) * pow(26, j);
                s.pop_back();
                j++;
                if (s.empty())
                {
                    break;
                }
            }
            cout << 'R' << r << 'C' << c << endl;
        }
        s.clear();
        x.clear();
    }
}