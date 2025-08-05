#include<bits/stdc++.h>
using namespace std;

void f(vector<vector<bool>> &check,vector<string> &s,int i,int j,int h,int w)
{
    int ii = i;
    int jj = j;
    for(;ii < h;ii++)
    {
        if(s[ii][j] == '.')
        {
            break;
        }
    }
    for(;jj < w;jj++)
    {
        if(s[i][jj] == '.')
        {
            break;
        }
    }
    for(int iii = i;iii < ii;iii++)
    {
        for(int jjj = j;jjj < jj;jjj++)
        {
            check[iii][jjj] = true;
        }
    }
}


int main()
{
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for(int i = 0;i < h;i++)
    {
        cin >> s[i];
    }
    vector<vector<bool>> check(h,vector<bool>(w,false));
    bool flag = true;
    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            if(s[i][j] == '#' && check[i][j] == false)
            {
                f(check,s,i,j,h,w);
            }
        }
    }
    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            if(s[i][j] == '.' && check[i][j])
            {
                flag = false;
            }
        }
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