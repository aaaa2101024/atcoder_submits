#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        if(m - x >= 0)
        {
            m -= x;
        }
        else
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
}