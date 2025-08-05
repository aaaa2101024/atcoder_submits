#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    string s;
    cin >> n >> q >> s;
    s = "xx" + s + "xx";
    vector<int> x(q);
    vector<char> c(q);
    for (int i = 0; i < q; i++)
        cin >> x[i] >> c[i];
    int ans = 0;
    for(int i = 2;i < n;i++)
    {
        if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
            ans++;
    }
    for(int i = 0;i < q;i++)
    {
        string temp = s;
        temp[x[i] - 1 + 2] = c[i];
        string check_s = s.substr(x[i] - 1,5);
        string check_temp = temp.substr(x[i] - 1,5);
        int s_abc = 0,temp_abc = 0;
        for(int j = 0;j < 3;j++)
        {
            if(check_s[j] == 'A' && check_s[j + 1] == 'B' && check_s[j + 2] == 'C')
                s_abc++;
            if(check_temp[j] == 'A' && check_temp[j + 1] == 'B' && check_temp[j + 2] == 'C')
                temp_abc++;
        }
        ans = ans + (temp_abc - s_abc);
        s = temp;
        cout << ans << endl;
    }
}