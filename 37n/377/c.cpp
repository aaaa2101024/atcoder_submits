#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,m;
    cin >> n >> m;
    long sum = n * n;
    set<pair<long,long>> check;
    vector<pair<long,long>> loc(m);
    for(long i = 0;i < m;i++)
    {
        long x,y;
        cin >> x >> y;
        pair<long,long> temp = {x,y};
        check.insert(temp);
        loc[i] = {x,y};
    }
    vector<pair<long,long>> move =
    {
        {2,1},
        {1,2},
        {-1,2},
        {-2,1},
        {-2,-1},
        {-1,-2},
        {1,-2},
        {2,-1}
    };
    for(long i = 0;i < m;i++)
    {
        for(long j = 0;j < 8;j++)
        {
            long x = loc[i].first - move[j].first;
            long y = loc[i].second - move[j].second;
            if(0 < x && x <= n && 0 < y && y <= n)
            {
                pair<long,long> temp = {x,y};
                check.insert(temp);
            }
        }
    }
    cout << sum - check.size()<< endl;
}