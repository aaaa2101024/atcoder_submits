#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> p;
    map<int,int> q;
    map<int,int> iq;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        p[i] = x - 1;
    }
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        q[i] = x - 1;
        iq[x - 1] = i;
    }
    for(int i = 0;i < n;i++)
    {
        cout << q[p[iq[i]]] << " ";
    }
    cout << endl;
}