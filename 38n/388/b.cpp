#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin >> n >> d;
    vector<pair<int,int>> tl(n);
    for(int i = 0;i < n;i++)
    {
        cin >> tl[i].first >> tl[i].second;
    }
    for(int i = 1;i <= d;i++)
    {
        int M = 0;
        for(int j = 0;j < n;j++)
        {
            tl[j].second++;
            M = max(M,tl[j].second * tl[j].first);
        }
        cout << M << endl;
    }
}