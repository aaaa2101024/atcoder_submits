#include<bits/stdc++.h>
using namespace std;

int main() 
{
    map<int,int> a;
    for(int i = 1;i <= 13;i++)
    {
        a[i] = 0;
    }
    for(int i = 0;i < 7;i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int tw = 0;
    int th = 0;
    for(auto x:a)
    {
        if(x.second == 2)
        {
            tw++;
        }
        else if(x.second >= 3)
        {
            th++;
        }
    }
    if(th >= 2 || (th >= 1 && tw >= 1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
