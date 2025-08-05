#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(4);
    for(int i = 0;i < 4;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i = 0;i < 3;i++)
    {
        if(a[i] == a[i + 1])
        {
            ans++;
            i++;
        }
    }
    cout << ans << endl;
}