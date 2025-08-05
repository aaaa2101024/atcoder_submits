#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> a;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        if(a.count(x))
        {
            cout << a[x] << ' ';
            a[x] = i + 1;
        }
        else
        {
            a[x] = i + 1;
            cout << -1 << ' ';
        }
    }
    cout << endl;
}