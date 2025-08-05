#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int r;
    int c;
    string s;
    cin >> n >> r >> c >> s;
    string ans = "";
    set<pair<int,int>> loc;
    pair<int,int> fi = {0,0};
    loc.insert(fi);
    for(int i = 0;i < n;i++)
    {
        if(s[i] == 'N')
        {
            fi.first++;
            loc.insert(fi);
            r++;
        }
        else if(s[i] == 'S')
        {
            fi.first--;
            loc.insert(fi);
            r--;
        }
        else if(s[i] == 'W')
        {
            fi.second++;
            loc.insert(fi);
            c++;
        }
        else if(s[i] == 'E')
        {
            fi.second--;
            loc.insert(fi);
            c--;
        }
        if(loc.count({r,c}))
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
    }
    cout << ans << endl;
}