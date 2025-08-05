#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    int st = 0;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == '.')
        {
            count = 0;
            st = i + 1;
        }
        else
            count++;
    }
    cout << s.substr(st,count) << endl;
}