#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        string test = "";
        for(int j = 0;j <= n - i;j++)
        {
            test = s.substr(i,j);
            string re = test;
            reverse(re.begin(),re.end());
            if(re == test)
            {
                ans = max(ans,int(re.size()));
            }
        }
    }
    cout << ans << endl;
}