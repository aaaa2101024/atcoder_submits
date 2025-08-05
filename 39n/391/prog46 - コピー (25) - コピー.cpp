#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    set<char> c;
    for(int i = 0;i < n;i++)
    {
        c.insert(s[i]);
    }
    if(c.size() == 4)
    {
        cout << "Yes" << endl;
        return 0;
    }
    if(c.size() == 2)
    {
        string s = "";
        for(char x:c)
        {
            s += x;
        }
        if(s == "NS" || s == "EW")
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}