#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    vector<bool> ch(n,false);
    vector<pair<int,int>> ans(0);
    for(int i = 0;i < n;i++)
    {
        if(a[i] != i + 1)
        {
            ans.emplace_back(i + 1,a[i]);
        }
    }
}