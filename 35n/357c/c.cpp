#include <bits/stdc++.h>
using namespace std;



void solve(int n,vector<vector<vector<char>>> &z)
{
    if (z[n - 1].size() != 0)
    {
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            x *= 3;
        }
        int y = x / 3;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (y <= i && i < y * 2 && y <= j && j < y * 2)
                {
                    cout << '.';
                }
                else if (i % 3 == 1 && j % 3 == 1)
                {
                    cout << '.';
                }
                else
                {
                    cout << '#';
                }
            }
            cout << endl;
        }
    }
    else
    {
        z[n].push_back();
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            x *= 3;
        }
        int y = x / 3;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (y <= i && i < y * 2 && y <= j && j < y * 2)
                {
                    cout << '.';
                }
                else if (i % 3 == 1 && j % 3 == 1)
                {
                    cout << '.';
                }
                else
                {
                    cout << '#';
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<vector<vector<char>>> z(7,vector<vector<char>>(1,vector<char>(0)));
    z[0][0].emplace_back('#');
    int n;
    cin >> n;
    solve(n,z);
}