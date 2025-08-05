#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int n,m;
    cin >> n >> m;
    set<pair<int,int>> check;
    for(int i = 0;i < m;i++)
    {
        int x,y;
        cin >> x >> y;
        pair<int,int> a1 = {x,y};
        pair<int,int> a2 = {y,x};
        if(a1 == a2)
        {
            ans++;
        }
        else if(check.count(a1))
        {
            ans++;
        }
        else
        {
            check.insert(a1);
            check.insert(a2);
        }
    }
    cout << ans << endl;
}