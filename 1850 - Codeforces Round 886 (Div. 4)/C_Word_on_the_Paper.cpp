#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    char c[8][8];
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> c[i][j];
                if (c[i][j] != '.')
                {
                    a = j;
                }
            }
        }
        string s;
        for (int i = 0; i < 8; i++)
        {
            s += c[i][a];
        }
        s.erase(remove(s.begin(), s.end(), '.'), s.end());
        cout << s << endl;
    }
}