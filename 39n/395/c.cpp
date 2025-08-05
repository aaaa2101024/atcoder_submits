#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 1 << 30;
    vector<int> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    map<int,int> ch;
    for(int i = 0;i < n;i++)
    {
        if(ch.count(a[i]))
        {
            ans = min(ans,i - ch[a[i]] + 1);
            ch[a[i]] = i;
        }
        else
        {
            ch[a[i]] = i;
        }
    }
    if(ans == (1 << 30))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}