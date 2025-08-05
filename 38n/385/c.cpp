#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> check;
    vector<vector<int>> h(0,vector<int>(0));
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        h[x].emplace_back(i);
        check.insert(x);
    }
    int ans = 1;
    for(auto i:check)
    {
        int m = h[i].size();
        int temp = 0;
        for(int j = 0;j < m;j++)
        {
            for(int k = j + 1;k < n;k++)
            {
                
            }
        }
    }
    cout << ans << endl;

}