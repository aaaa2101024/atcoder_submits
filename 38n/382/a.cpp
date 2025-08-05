#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    string s;
    cin >> n >> d >> s;
    int ans = 0;
    for(int i = 0;i < n;i++)
    {
        if(s[i] != '@')
        {
            ans++;
        }
    }
    cout << min(n,ans + d) << endl;
}