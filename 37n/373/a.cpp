#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s(12);
    int ans = 0;
    for(int i = 0;i < 12;i++) cin >> s[i];
    for(int i = 0;i < 12;i++)
    {
        if(s[i].size() == i + 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
}