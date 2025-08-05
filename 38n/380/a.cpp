#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    if(s == "122333")
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}