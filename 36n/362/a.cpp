#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,g,b;
    string c;
    cin >> r >> g >> b >> c;
    if(c == "Red")
    {
        cout << min(g,b) << endl;
    }
    else if(c == "Blue")
    {
        cout << min(r,g) << endl;
    }
    else
    {
        cout << min(r,b) << endl;
    }
}