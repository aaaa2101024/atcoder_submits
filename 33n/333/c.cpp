#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long ans = 0;
    bool flag = true;
    vector<int> temp = {0, 0, 0};
    vector<long> a = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111, 11111111111, 111111111111};
    for (int i = 0; i < n - 1; i++)
    {
        if (temp[0] == temp[1] && temp[1] == temp[2])
        {
            temp[0]++;
            temp[1] = 0;
            temp[2] = 0;
            flag = true;
        }
        else if (temp[0] == temp[1])
        {
            temp[2]++;
        }
        else
        {
            if (temp[1] == temp[2])
            {
                temp[2] = 0;
                temp[1]++;
            }
            else
            {
                temp[2]++;
            }
        }
        if (temp[0] == temp[1] && flag)
        {
            temp[2] = 0;
            flag = false;
        }
    }
    ans = a[temp[0]] + a[temp[1]] + a[temp[2]];
    cout << ans << endl;
}