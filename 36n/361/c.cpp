#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,k;
    cin >> n >> k;
    deque<long> a;
    for(long i = 0;i < n;i++)
    {
        long x;
        cin >> x;
        a.emplace_back(x);
    }
    sort(a.begin(),a.end());
    for(long i = 0;i < k;i++)
    {
        long l = a.size();
        long left = a[1] - a[0],right = a[l - 1] - a[l - 2];
        if(left >= right)
        {
            a.pop_front();
        }
        else
        {
            a.pop_back();
        }
    }
    long l = a.size();
    cout << a[l - 1] - a[0] << endl;
}