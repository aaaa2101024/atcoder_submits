#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mg, mh;
    cin >> n >> mg;
    vector<vector<int>> G(n + 1, vector<int>(n + 1)), H(n + 1, vector<int>(n + 1));
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            G[i][j] = 0;
        }
    }

    for (int i = 0; i < mg; i++)
    {
        int temp_i, temp_j;
        cin >> temp_i >> temp_j;
        G[temp_i][temp_j] = 1;
        G[temp_j][temp_i] = 1;
    }

    cin >> mh;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            H[i][j] = 0;
        }
    }

    for (int i = 0; i < mh; i++)
    {
        int temp_i, temp_j;
        cin >> temp_i >> temp_j;
        H[temp_i][temp_j] = 1;
        H[temp_j][temp_i] = 1;
    }
    vector<int> check_G(n+1);
    for(int i = 0;i < n+1;i++)
    {
        int temp = 0;
        for(int j = 0;j < n+1;j++)
        {
            if(G[i][j] == 1)
            {
                temp++;
            }
            check_G[i] = temp;
        }
    }
    sort(check_G.begin(),check_G.end());
    vector<vector<int>> fee(n + 1, vector<int>(n + 1));
    for(int i = 0;i < n + 1;i++)
    {
        for(int j = 0;j < n;j++)
        {
            fee[i][j] = 0;
        }
    }
    for(int i = 1;i < n + 1;i++)
    {
        for(int j = i + 1;j < n + 1;j++)
        {
            int temp;
            cin >> temp;
            fee[i][j] = temp;
        }
    }
    int ans = 0;
    for(int i = 0;i < n+ 1;i++)
    {
        vector<int> check_H(n+1);
        
    }
    cout << ans /2 << endl;
}