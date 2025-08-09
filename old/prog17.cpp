#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(101,vector<int>(101));
    vector<vector<int>> a(n,vector<int>(4));
    for(int i = 0;i < n;i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = a[i][0]; j < a[i][1];j++)
        {
            for(int k = a[i][2];k < a[i][3];k++)
            {
                vec[k][j] = 1;
            }
        }
    }
    int count = 0;
    for(int i = 0;i < 101;i++)
    {
        for (int j = 0; j < 101; j++)
        {
            if(vec[i][j] == 1)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}