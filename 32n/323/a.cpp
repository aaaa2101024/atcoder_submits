#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool can = true;
    int n = s.size();
    for(int i = 1;i < n;i += 2)
    {
        if(s[i] == '1')
        {
            can = false;
            break;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}