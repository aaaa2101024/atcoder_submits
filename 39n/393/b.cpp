#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int ans = 0;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        for(int j = 1;i + j * 2 < n;j++)
        {
            if(s[i] == 'A' && s[i + j] == 'B' && s[i + 2 * j] == 'C')
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
