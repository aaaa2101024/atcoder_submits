#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    t = s;
    sort(s.begin(),s.end());
    if(s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}