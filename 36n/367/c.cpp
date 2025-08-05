#include <bits/stdc++.h>
using namespace std;

// auto s(int n, vector<vector<int>> a,int temp,int y)
// {
//     for(int i = 0;i < n)
//     {
//         for(int  = 0;j < )
//     }
// }

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    vector<vector<int>> x(sum, vector<int>(0));
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        while(temp != vec[i])
        {
            for(int j = 0,
             k = 0;k < sum/vec[i];j++,k++)
            {
                x.at(j + k*sum/vec[i]).push_back(temp + 1);
            }
            temp++;
        }
    }
    for(int i = 0;i < sum;i++)
    {
        int sumsum = 0;
        for(int j = 0;j < n;j++)
        {
            sumsum += x[i][j];
        }
        if(sumsum%k == 0)
        {
            for(int j = 0;j < n;j++)
            {
                cout << x[i][j] << ' ';
            }
            cout << endl;
        }
    }
    cout << 1/0;
}