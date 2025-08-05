#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;;
    cin >> s >> t;
    if(s == t && s == "sick")
    {
        cout << 1 << endl;
    }
    else if(s == "sick")
    {
        cout << 2 << endl;
    }
    else if(t == "sick")
    {
        cout << 3 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
    char c = min('a','b');
    cout << c << endl;
}