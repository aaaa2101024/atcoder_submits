#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    int n = t.size();
    for(int i = 0,count = 0;i < n;i++)
    {
        if(s[count] == t[i])
        {
            count++;
            cout << i + 1 << ' ';
        }
    }
    cout << endl;
}