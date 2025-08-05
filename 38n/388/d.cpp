#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    vector<long> a(n);
    for(long i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    long st = 0;
    for(long i = 0;i < n;i++)
    {
        if(st >= i)
        {
            a[i] += i;
            st -= i;
        }
        else
        {
            a[i] += st;
            st = 0;
        }
        long mai = min(n - 1 - i,a[i]);
        a[i] = max(a[i] - (n - 1 - i),0l);
        st += mai;
    }
    for(int i = 0;i < n;i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
}