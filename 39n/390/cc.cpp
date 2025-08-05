#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    bool flag = true;
    for(int i = 0;i < h;i++)
    {
        cin >> s[i];
    }
    int a = h - 1;
    int b = 0;
    int c = w - 1;
    int d = 0;
    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            if(s[i][j] == '#')
            {
                a = min(a,i);
                b = max(b,i);
                c = min(c,j);
                d = max(d,j);
            }
        }
    }
    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            if(a <= i && i <= b && c <= j && j <= d)
            {
                if(s[i][j] == '.')
                {
                    flag = false;
                }
            }
            else
            {
                if(s[i][j] == '#')
                {
                    flag = false;
                }
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