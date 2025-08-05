#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c;
    cin >> c;
    vector<int> t(n);
    for (auto &x : t)
        cin >> x;
    int ans = 0;
    int check = 0;
    for(int i = 0;i < n;i++)
    {
        if(check <= t[i])
        {
            ans++;
            check = t[i] + c;
        }
    }
    cout << ans << endl;
}