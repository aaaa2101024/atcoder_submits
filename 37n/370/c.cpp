#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = 0;
    int m = s.size();
    for (int i = 0; i < m; i++)
    {
        if (s[i] != t[i])
            n++;
    }
    cout << n << endl;
    vector<string> a(0);
    for (int i = 0; i < n; i++)
    {
        string temp = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        string s_temp = s;
        for (int j = 0; j < m; j++)
        {
            s_temp = s;
            if (s_temp[j] != t[j])
            {
                s_temp[j] = t[j];
                if (temp > s_temp)
                {
                    temp = s_temp;
                }
            }
        }
        s = temp;
        a.push_back(s);
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}
/*

adbe

bdbe
acbe
adbc


bcbc



*/