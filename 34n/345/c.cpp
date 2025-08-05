#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,long> x;
    map<char,long> check;
    for(long i = 0;i < 26;i++)
    {
        x[char('a' + i)] = 0;
        check[char('a' + i)] = 0;
    }
    string s;
    cin >> s;
    long n = s.size();
    bool flag = true;
    long ans = 0;
    for(long i = 0;i < n;i++)
    {
        x[s[i]]++;
        if(flag && x[s[i]] >= 2)
        {
            ans++;
            flag = false;
        }
    }
    for(long i = 0;i < 25;i++)
    {
        check[char('a' + i + 1)] = check[char('a' + i)] + x[char('a' + i)];
    }
    for(long i = 0;i < 25;i++)
    {
        ans += x[char('a' + i)] * (n - check[char('a' + i + 1)]);
    }
    cout << ans << endl;
}