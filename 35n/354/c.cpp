#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<tuple<long,long,int>> ac(n);
    for(int i = 0;i < n;i++)
    {
        cin >> get<1>(ac[i]) >> get<0>(ac[i]);
        get<2>(ac[i]) = i + 1;
    }
    sort(ac.begin(),ac.end());
    long Max = -1;
    long cost = -1;
    for(int i = 0;i < n;i++)
    {
        if(cost < get<0>(ac[i]) && Max > get<1>(ac[i]))
        {
            get<2>(ac[i]) = 0;
        }
        else
        {
            Max = get<1>(ac[i]);
            cost = get<0>(ac[i]);
        }
    }
    vector<long> ans(0);
    for(int i = 0;i < n;i++)
    {
        if(get<2>(ac[i]) != 0)
        {
            ans.emplace_back(get<2>(ac[i]));
        }
    }
    long m = ans.size();
    cout << m << endl;
    sort(ans.begin(),ans.end());
    for(int i = 0;i < m;i++)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;
}