#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    int ans = 0;
    vector<vector<bool>> vec(h, vector<bool>(w, false));
    vector<pair<int,int>> x(0);
    for (int j = 0; j < h; j++)
    {
        for (int k = 0; k < w; k++)
        {
            if(s[j][k] == 'H')
            {
                vec[j][k] = true;
            }
        }
    }
    for (int i = 0; i < d; i++)
    {
        
    }
}