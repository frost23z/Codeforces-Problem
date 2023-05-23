#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ans="";
    cin >> s;
    s+="WUB";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            if(ans.size()>0 && ans[ans.size()-1]!=' ')
            {
                ans+=" ";
            }
        }
        else
        {
            ans+=s[i];
        }
    }
    cout<<ans<<endl;
}