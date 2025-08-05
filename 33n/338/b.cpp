#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char,int> a;
    for(int i = 0;i < 26;i++)
    {
        a[char('a' + i)] = 0;
    }
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        a[s[i]]++;
    }
    char ans;
    int max = -1;
    for(auto x:a)
    {
        if(max < x.second)
        {
            ans = x.first;
            max = x.second;
        }
    }
    cout << ans << endl;
}