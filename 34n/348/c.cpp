#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> a;
    for(int i = 0;i < n;i++)
    {
        int temp,c;
        cin >> temp >> c;
        if(a.count(c))
        {
            a[c] = min(a[c],temp);
        }
        else
        {
            a[c] = temp;
        }
    }
    int ans = 0;
    for(auto x:a)
    {
        ans = max(ans,x.second);
    }
    cout << ans << endl;
}