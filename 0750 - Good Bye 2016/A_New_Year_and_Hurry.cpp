#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i = 1;
    cin >> n >> k;
    vector<int> v(n);
    int t = 240 - k;
    while (t - 5 * i >= 0 && i <= n)
    {
        t -= 5 * i;
        i++;
    }
    cout << i - 1 << endl;
}