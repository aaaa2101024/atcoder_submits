#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int M = 0;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        if(isupper(s[i]))
        {
            M++;
        }
    }
    int m = n - M;
    if(M > m)
    {
        for(int i = 0;i < n;i++)
        {
            if(isupper(s[i]))
            {
                cout << s[i];
            }
            else
            {
                cout << char(toupper(s[i]));
            }
        }
    cout << endl;
    }
    else
    {
        for(int i = 0;i < n;i++)
        {
            if(islower(s[i]))
            {
                cout << s[i];
            }
            else
            {
                cout << char(tolower(s[i]));
            }
        }
        cout << endl;
    }
}