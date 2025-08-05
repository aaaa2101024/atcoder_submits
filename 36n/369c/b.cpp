#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<char> s(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i] >> s[i];
    }
    int ans = 0;
    int l = -1;
    int r = -1;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == 'L')
        {
            l = a[i];
            break;
        }
    }
    for(int i = 0;i < n;i++)
    {
        if(s[i] == 'R')
        {
            r = a[i];
            break;
        }
    }
    for(int i = 0;i < n;i++)
    {
        if(s[i] == 'R')
        {
            ans += abs(r - a[i]);
            r = a[i];
        }
        else if(s[i] == 'L')
        {
            ans += abs(l - a[i]);
            l = a[i];
        }
    }
    cout << ans << endl;
}