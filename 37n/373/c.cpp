#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n),b(n);
    for(int i = 0;i < n;i++)
    {
         cin >> a[i];
    }
    for(int i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    long a_max = -1 * long((1ll << 60)),b_max = -1 * long((1ll << 60));
    for(int i = 0;i < n;i++)
    {
        a_max = max(a_max,a[i]);
        b_max = max(b_max,b[i]);
    }
    cout << a_max + b_max << endl;
}