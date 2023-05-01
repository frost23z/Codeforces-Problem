#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4], c = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a + 4);
    for (int i = 0; i < 2; i++)
    {
        if (a[i] + a[i + 1] > a[i + 2])
        {
            cout << "TRIANGLE";
            return 0;
        }
        else if (a[i] + a[i + 1] == a[i + 2])
        {
            c = 1;
        }
    }
    if (c)
    {
        cout << "SEGMENT";
        return 0;
    }
    cout << "IMPOSSIBLE";
}
