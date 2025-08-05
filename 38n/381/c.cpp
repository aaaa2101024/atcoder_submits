#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 1;
    for(int i = 0;i < n;)
    {
        int j = i;
        int c1 = 0;
        int x = 0;
        int c2 = 0;
        bool flag = true;
        while(j < n && s[j] == '1')
        {
            j++;
            c1++;
        }
        if(s[j] != '/')
        {
            flag = false;
        }
        while(j < n && s[j] == '/')
        {
            j++;
            x++;
            if(x == 2)
            {
                flag = false;
            }
        }
        while(j < n && s[j] == '2')
        {
            j++;
            c2++;
        }
        if(flag)
        {
            int x = min(c1,c2);
            ans = max(ans,x * 2 + 1);
        }
        i = j;
    }
    cout << ans << endl;
}