#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool can = true;
    vector<char> s(0);
    while(n != 0)
    {
        int x = n%10;
        s.push_back(x);
        n /= 10;
    }
    reverse(s.begin(),s.end());
    int m = s.size();
    for(int i = 0;i < m -1;i++)
    {
        if(s[i] <= s[i+1])
        {
            can = false;
            break;   
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}