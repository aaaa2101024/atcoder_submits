#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> loc(3);
    for(int i = 0;i < 3;i++)
    {
        cin >> loc[i].first >> loc[i].second;
    }
    bool flag = false;
    vector<int> len(3,0);
    for(int i = 0;i < 3;i++)
    {
        int x = loc[i % 3].first -loc[(i + 1) % 3].first;
        int y = loc[i % 3].second -loc[(i + 1) % 3].second;
        len[i] = x * x + y * y;
    }
    sort(len.begin(),len.end());
    if(len[0] + len[1] == len[2])
    {
        flag = true;
    }
    if(flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
