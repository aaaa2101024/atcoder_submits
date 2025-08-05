#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    if (t[2] == 'X')
    {
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (toupper(s[i]) == t[j])
            {
                j++;
            }
            if (j == 2)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    else
    {
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (toupper(s[i]) == t[j])
            {
                j++;
            }
            if (j == 3)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}