#include <bits/stdc++.h>
using namespace std;

void check(vector<int> &b, int i)
{
    bool flag = false;
    if (b[i] == 1)
    {
        flag = true;
        return;
    }
    else
    {
        check();
        if(flag)
        {

        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n + 1, vector<int>(0));
    vector<int> b(k);
    vector<int> ans(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        a.at(x).push_back(y);
        a.at(y).push_back(x);
    }
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < k; i++)
    {
        ans[b[i]] == 1;
    }
}