#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        vector<string> temp(i,"");
        for (int j = 0; j < n; j++)
        {
            temp[j % i] += s[j];
        }
        for(int j = 0;j < i;j++)
        {
            if(temp[j] == t)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}