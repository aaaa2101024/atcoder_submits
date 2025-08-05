#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '|' && flag)
            cout << s[i];
        else if(s[i] == '|')
        {
            if(flag)
            {
                flag = false;
            }
            else
            {
                flag = true;
            }
        }
    }
    cout << endl;
}
