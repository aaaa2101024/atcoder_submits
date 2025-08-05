#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'o')
                count++;
        }
        result[i] = count;
    }
    for (int i = 0; i < n; i++)
    {
        int temp = -1, res = -1;
        for (int j = 0; j < n; j++)
        {
            if (res < result[j])
            {
                temp = j;
                res = result[j];
            }
        }
        cout << temp + 1 << ' ';
        result[temp] = -1;
    }
    cout << endl;
}