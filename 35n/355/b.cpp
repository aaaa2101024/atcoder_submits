#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    string ans = "No";
    int i = 0,j = 0;
    bool flag = false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(i < n && j < m)
    {
        if(a[i] > b[j])
        {
            j++;
            flag = false;
        }
        else
        {
            i++;
            if(flag)
                ans = "Yes";
            else
                flag = true;
        }
    }
    if(i < n - 1)
    {
        ans = "Yes";
    }
    cout << ans << endl;
}