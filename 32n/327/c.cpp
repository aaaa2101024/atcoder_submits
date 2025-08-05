#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> a(9, vector<int>(9));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for (int i = 0; i < 9; i++)
    {
        set<int> check;
        for (int j = 0; j < 9; j++)
        {
            check.insert(a[i][j]);
        }
        if (check.size() != 9)
        {
            flag = false;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        set<int> check;
        for (int j = 0; j < 9; j++)
        {
            check.insert(a[j][i]);
        }
        if (check.size() != 9)
        {
            flag = false;
        }
    }
    pair<int, int> loc = {1, 1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            set<int> check;
            for (int ii = -1; ii < 2; ii++)
            {
                for (int jj = -1; jj < 2; jj++)
                {
                    check.insert(a[loc.first + 3 * i + ii][loc.second + 3 * j + jj]);
                }
            }
            if (check.size() != 9)
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}