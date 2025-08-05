#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int ans = 0;
    for (int i = 0; i < n;)
    {
        int j = i;
        int count = 0;
        if(s[j] == 'X')
        {
            i++;
            continue;
        }
        while(j < n && count < k && s[j] == 'O')
        {
            j++;
            count++;
        }
        if(count == k)
        {
            ans++;
        }
        i = j;
    }
    cout << ans << endl;
}