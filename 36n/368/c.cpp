#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    long t = 0;
    for(int i = 0;i < n;i++)
    {
        t += a[i]/5*3;
        a[i] = a[i]%5;
        while(a[i] > 0)
        {
            t++;
            if(t%3 == 0)
            a[i] -= 3;
            else
            a[i]--;
        }
    }
    cout << t << endl;
}