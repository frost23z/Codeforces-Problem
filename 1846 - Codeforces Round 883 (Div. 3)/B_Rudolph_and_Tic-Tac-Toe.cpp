#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        int flag = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '.')
            {
                cout << a[i][0] << endl;
                flag = 1;
                break;
            }
            if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.')
            {
                cout << a[0][i] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            continue;
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '.')
        {
            cout << a[0][0] << endl;
            continue;
        }
        if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '.')
        {
            cout << a[0][2] << endl;
            continue;
        }
        cout << "DRAW" << endl;
    }
}
