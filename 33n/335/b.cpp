#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<tuple<int,int,int>> ans;
    for (int x = 0; x <= n; x++)
    {
        for(int y = 0;y <= n;y++)
        {
            for(int z = 0;z <= n;z++)
            {
                if(x + y + z > n)
                    break;
                else
                {
                    tuple<int,int,int> in = {x,y,z};
                    ans.insert(in);
                }
            }
        }
    }
    for(auto x:ans)
    cout << get<0>(x) <<  ' ' << get<1>(x) << ' ' << get<2>(x) << endl;
}