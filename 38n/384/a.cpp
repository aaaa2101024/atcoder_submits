#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c,d;
    cin >> n >> c >> d;
    string s;
    cin >> s;
    for(int i = 0;i < n;i++)
    {
        if(s[i] != c)
        {
            s[i] = d;
        }
    }
    cout << s << endl;
}