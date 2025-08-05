#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    long m = 0;
    for(int i = 0;i < n;i++)
    cin >> a[i];
    long check = 0;
    for(int i = 0;i < n;i++)
    {
        check += a[i];
        m = min(m,check);
    }
    long ans = abs(m);
    for(int i = 0;i < n;i++)
        ans += a[i];
    cout << ans << endl;
}