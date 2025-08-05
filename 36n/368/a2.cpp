#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < k;i++)
    {
        swap(a[n - 1],a[0]);
        for (int j = n - 1; j > 1; j--)
        {
            swap(a[j],a[j - 1]);
        }
    }
    for(int i = 0;i < n;i++)
    cout << a[i] << ' ';
    cout << endl;
}