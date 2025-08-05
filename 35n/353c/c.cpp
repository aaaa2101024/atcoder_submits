#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    vector<long> b(n + 1);
    b[0] = 0;
    for(int i = 0;i < n;i++)
    {
        b[i + 1] = b[i] + a[i];
    }
    long ans = 0;
    for(int i = 0;i < n;i++)
    {
        
    }
    cout << ans << endl;
}