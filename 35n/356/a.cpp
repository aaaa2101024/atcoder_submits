#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i = 1;i <= n;i++)
    {
        a[i - 1] = i; 
    }
    reverse(a.begin() + l - 1,a.begin() + r);
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}