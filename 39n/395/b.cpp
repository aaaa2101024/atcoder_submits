#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<vector<char>> s(n,vector<char>(n));
    for(int i = 1;i <= n;i++)
    {
        int j = n + 1 - i;
        if(i <= j)
        {
            if(i % 2 == 1)
            {
                for(int o = i - 1;o < j;o++)
                {
                    for(int p = i -1 ;p < j;p++)
                    {
                        s[o][p] = '#';
                    }
                }
            }
            else
            {
                for(int o = i-1;o < j;o++)
                {
                    for(int p = i-1;p < j;p++)
                    {
                        s[o][p] = '.';
                    }
                }
            }
        }
    }
    for(int i = 0;i < n ;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
}
