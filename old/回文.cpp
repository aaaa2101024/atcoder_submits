#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool can = true;
    for(int i = 0;i < s.size()/2;i++)
    {
        if(s.at(i) != s.at(s.size() - 1 - i))
        {
            can = false;
            break;
        }
    }
    if(can)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}