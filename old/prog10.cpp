#include<bits/stdc++.h>
using namespace std;

int main()
{
    int H,W;
    cin >> H >> W;
    int x,y;
    cin >> x >> y;
    vector<vector<char>> a(H+2,vector<char>(W+2));
    for (int i = 0; i < H+2; i++)
    {
        for (int j = 0; j < W+2; j++)
        {
            if(i == 0 || i == H + 1 || j == 0 || j == W + 1)
            {
                a[i][j] = '#';
            }
            else
            {
                cin >> a[i][j];
            }
        }
    }
    /*
    for (int i = 0; i < H+2; i++)
    {
        for (int j = 0; j < W+2; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    */
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
    {
        //U
        switch(S.at(i))
        {
            case 'U':
            if(a[x-1][y] != '#')
            {
                x--;
            }
            break;
            case 'D':
            if(a[x+1][y] != '#')
            {
                x++;
            }
            break;
            case 'L':
            if(a[x][y-1] != '#')
            {
                y--;
            }
            break;
            case 'R':
            if(a[x][y+1] != '#')
            {
                y++;
            }
            break;
        }
    }
    cout << x << ' ' << y << endl;
}