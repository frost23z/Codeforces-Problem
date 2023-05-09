#include <bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
int a[1001][1001], n, m;
int dfs(int i, int j)
{
    vis[i][j] = true;
    int ans = a[i][j];
    if (i != 0 && a[i - 1][j] != 0 && !vis[i - 1][j])
    {
        ans += dfs(i - 1, j);
    }
    if (i != n - 1 && a[i + 1][j] != 0 && !vis[i + 1][j])
    {
        ans += dfs(i + 1, j);
    }
    if (j != 0 && a[i][j - 1] != 0 && !vis[i][j - 1])
    {
        ans += dfs(i, j - 1);
    }
    if (j != m - 1 && a[i][j + 1] != 0 && !vis[i][j + 1])
    {
        ans += dfs(i, j + 1);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                vis[i][j] = 0;
            }
        }
        int anss = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && a[i][j])
                {
                    anss = max(anss, dfs(i, j));
                }
            }
        }
        cout << anss << endl;
    }
}