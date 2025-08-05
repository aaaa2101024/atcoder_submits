#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    vector<long> check(0);
    for(long i = 1;i <= 1000000;i++)
    {
        long x = i * i * i;
        string s = to_string(x);
        bool flag = true;
        for(int i = 0;i < int(s.size());i++)
        {
            if(!(s[i] == s[int(s.size()) - i - 1]))
            {
                flag = false;
            }
        }
        if(flag)
        {
            check.emplace_back(x);
        }
    }
    check.emplace_back(1000000000000000001);
    for(int i = 0;i < int(check.size());i++)
    {
        if(n < check[i])
        {
            cout << check[i - 1] << endl;
            break;
        }
    }
}