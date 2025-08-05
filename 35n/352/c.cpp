#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<long,long>> ab(n);
    for(int i = 0;i < n;i++)
    {
        cin >> ab[i].first >> ab[i].second;
    }
    long M = -1;
    long ans = 0;
    int Mi = 0;
    for(int i = 0;i < n;i++)
    {
        if(M < ab[i].second - ab[i].first)
        {
            M = ab[i].second - ab[i].first;
            Mi = i;
        }
    }
    for(int i = 0;i < n;i++)
    {
        if(i == Mi)
        {
            ans += ab[i].second;
        }
        else
        {
            ans+= ab[i].first;
        }
    }
    cout << ans << endl;
}