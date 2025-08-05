#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<long> check;
    vector<long> a(n);
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<long> b(m);
    for(int i = 0;i < m;i++)
    {
        cin >> b[i];
    }
    int l;
    cin >> l;
    vector<long> c(l);
    for(int i = 0;i < l;i++)
    {
        cin >> c[i];
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            for(int k = 0;k < l;k++)
            {
                long temp = a[i] + b[j] + c[k];
                check.insert(temp);
            }
        }
    }
    int q;
    cin >> q;
    for(int i = 0;i < q;i++)
    {
        int x;
        cin >> x;
        if(check.count(x))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

}