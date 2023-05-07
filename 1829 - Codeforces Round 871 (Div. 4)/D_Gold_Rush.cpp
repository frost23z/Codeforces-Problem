#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, a, z;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (m > n)
        {
            cout << "NO" << endl;
            continue;
        }
        if (m == n)
        {
            cout << "YES" << endl;
            continue;
        }
        vector<int> v;
        stack<int> s;
        if (n % 3 == 0)
        {
            n /= 3;
            z = n * 2;
            if (n % 3 == 0)
            {
                v.push_back(n);
                s.push(n);
            }
            else
            {
                v.push_back(n);
            }
            if (z % 3 == 0)
            {
                v.push_back(z);
                s.push(z);
            }
            else
            {
                v.push_back(z);
            }
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        while (!s.empty())
        {
            a = s.top();
            s.pop();
            if (a % 3 == 0)
            {
                a /= 3;
                z = a * 2;
                if (a % 3 == 0)
                {
                    v.push_back(a);
                    s.push(a);
                }
                else
                {
                    v.push_back(a);
                }
                if (z % 3 == 0)
                {
                    v.push_back(z);
                    s.push(z);
                }
                else
                {
                    v.push_back(z);
                }
            }
            else
            {
                v.push_back(a);
            }
        }
        if (find(v.begin(), v.end(), m) != v.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}