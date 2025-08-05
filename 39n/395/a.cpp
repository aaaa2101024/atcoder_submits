#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string ans = "Yes";
    cin >> n;
    vector<int> s(n);
    for(int i = 0;i < n;i++)
    {
        cin >> s[i];
    }
    for(int i = 0;i < n - 1;i++)
    {
        if(s[i] >= s[i + 1])
        {
            ans = "No";
        }
    }
    cout << ans << endl;
}