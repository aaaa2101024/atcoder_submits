#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n - 1;i++)
    {
        if(s[i] == 'W' && s[i + 1] == 'A')
        {
            s[i] = 'A';
            s[i + 1] = 'C';
            i = max(-1,i - 2);
        }
    }
    cout << s << endl;
}