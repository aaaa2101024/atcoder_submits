#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(isupper(s[0]))
    {
        int n = s.size();
        for(int i = 1;i < n;i++)
        {
            if(isupper(s[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        cout << "No" << endl;
    }
}