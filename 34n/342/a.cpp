#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = s;
    sort(t.begin(),t.end());
    int n = s.size();
    char ans;
    if(t[0] != t[1])
    {
        ans = t[0];
    }
    else
    {
        ans = t[n - 1];
    }
    for(int i = 0;i < n;i++)
    {
        if(ans == s[i])
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}