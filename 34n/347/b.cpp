#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<string> ans;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        for(int j = 1;j <= n - i;j++)
        {
            ans.insert(s.substr(i,j));
        }
    }
    cout << ans.size() << endl;
}