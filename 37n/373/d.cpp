#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<pair<bool,long>>> a(n,vector<pair<bool,long>>((n,<false,0>));
    for(int i = 0;i < 10;i++)
    {
        cout << a[i][i].second << endl;
    }

}