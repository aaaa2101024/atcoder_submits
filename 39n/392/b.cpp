#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,m;
    cin >> n >> m;
    set<int> a;
    for(int i = 0;i < m;i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    int ans = 0;
    for(int i = 1;i <= n;i++)
    {
        if(!a.count(i))
        {
            ans++;
        }
    }
    cout << ans << endl;
    for(int i = 1;i <= n;i++)
    {
        if(!a.count(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
