#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    if(n % 2 == 1)
    {
        cout << "No" << endl;
        return 0;
    }
    map<char,int> a;
    for(int i = 0;i < 26;i++)
    {
        a[char('a' + i)] = 0;
    }
    string ans = "Yes";
    for(int i = 0;i < n;i+=2)
    {
        if(s[i] != s[i + 1])
        {
            ans = "No";
        }
        else
        {
            if(a[s[i]] == 2)
            {
                ans = "No";
            }
            else
            {
                a[s[i]] += 2;
            }
        }
    }
    cout << ans << endl;
}