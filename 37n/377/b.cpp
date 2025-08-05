#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s(8);
    for(int i = 0;i < 8;i++)
    {
        cin >> s[i];
    }
    vector<vector<bool>> check(8,vector<bool>(8,true));
    int ans = 0;
    for(int i = 0;i < 8;i++)
    {
        for(int j = 0;j < 8;j++)
        {
            if(s[i][j] == '#')
            {
                for(int k = 0;k < 8;k++)
                {
                    check[k][j] = false;
                    check[i][k] = false;
                }
            }
        }
    }
    for(int i = 0;i < 8;i++)
    {
        for(int j = 0;j < 8;j++)
        {
            if(check[i][j])
                ans++;
        }
    }
    cout << ans << endl;
}