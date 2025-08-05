#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    for(int i = 0;i < n - 1;i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    cout << -1 * ans << endl;
}