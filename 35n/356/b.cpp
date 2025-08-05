#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<long> a(m);
    vector<long> sum(m,0);
    for(int i = 0;i < m;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            long x;
            cin >> x;
            sum[j] += x;
        }
    }
    for(int i = 0;i < m;i++)
    {
        if(sum[i] < a[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}