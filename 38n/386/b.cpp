#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = n;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == '0')
        {
            if(i != n - 1)
            {
                if(s[i + 1] == '0')
                {
                    ans--;
                    i++;
                }
            }
        }
    }
    cout << ans << endl;
}