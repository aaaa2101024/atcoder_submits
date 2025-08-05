#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    string s;
    cin >> n >> d >> s;
    for(int i = 0;i < d;i++)
    {
        for(int j = n - 1;j >= 0;j--)
        {
            if(s[j] == '@')
            {
                s[j] = '.';
                break;
            }
        }
    }
    cout << s << endl;
}