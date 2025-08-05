#include<bits/stdc++.h>
using namespace std;

long ans = 0;
int n,k;

void dfs(vector<int> &r,vector<int> &check,vector<vector<int>> &ans,int count)
{
    if(count == n)
    {
        int temp = 0;
        for(int i = 0;i < n;i++)
        {
            temp += check[i];
        }
        if(temp % k == 0)
        {
            ans.emplace_back(check);
        }
        return;
    }
    else
    {
        for(int i = 1;i <= r[count];i++)
        {
            check[count] = i;
            dfs(r,check,ans,count + 1);
            check[count] = 0;
        }
    }
}

int main()
{
    cin >> n >> k;
    vector<int> r(n);
    vector<int> check(n,0);
    vector<vector<int>> ans(0,vector<int>(0));
    for(int i = 0;i < n;i++)
    {
        cin >> r[i];
    }
    dfs(r,check,ans,0);
    int ans_n = ans.size();
    sort(ans.begin(),ans.end());
    for(int i = 0;i < ans_n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
}