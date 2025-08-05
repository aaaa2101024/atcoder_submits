#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,a;
    cin >> n >> a;
    vector<long> t(n);
    long no = 0;
    for(long i = 0;i < n;i++)
    {
        cin >> t[i];
    }
    cout << t[0] + a << endl;
    no += t[0] + a;
    for(int i = 1;i < n;i++)
    {
        if(t[i] < no)
        {
            cout << a + no << endl;
            no += a;
        }
        else
        {
            no = t[i];
            cout << no + a << endl;
            no += a;
        }
    }
}