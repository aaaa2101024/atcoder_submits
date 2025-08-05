#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    int t = a[0];
    bool can = true;
    for(int i = 0;i < n;i++)
    {
        if(t != a[i])
        {
            can = false;
            break;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}