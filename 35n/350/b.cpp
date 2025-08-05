#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    map<int,bool> a;
    for(int i = 0;i < q;i++)
    {
        int t;
        cin >> t;
        if(a.count(t))
        {
            if(a[t])
            {
                n++;
                a[t] = false;
            }
            else
            {
                n--;
                a[t] = true;
            }
        }
        else
        {
            n--;
            a[t] = true;
        }
    }
    cout << n << endl;
}