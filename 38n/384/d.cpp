#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,s;
    cin >> n >> s;
    vector<long> a(n);
    long sum = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    s %= sum;
    vector<long> b(n + 1);
    b[0] = 0;
    for(int i = 1;i < n + 1;i++)
    {
        b[i] = b[i - 1] + a[i - 1];
    }
    bool flag = false;
    int j = 0;
    for(int i = 0;i < n + 1;i++)
    {
        if(s == b[i])
        {
            flag = true;
            j = i;
            break;
        }
        else if(s < b[i])
        {
            j = i;
            break;
        }
    }
    for(;j < n + 1;j++)
    {
        for(int i = 0;i < n + 1;i++)
        {
            if(s == b[j] - b[i])
            {
                flag = true;
                break;
            }
            else if(s > b[j] - b[i])
            {
                break;
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