#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> l;
            m[l]++;
        }
        int j = 0, flag = 1, k = 0;
        if (m.count(0))
        {
            k = m[0];
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        for (auto &i : m)
        {
            if (i.first != j || i.second > k)
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
            j++;
            k = i.second;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
    }
}