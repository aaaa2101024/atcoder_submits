#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0,b = 0;
    for(int i = 0;i < n;i++)
    {
        int x,y;
        cin >> x >> y;
        a += x;
        b += y;
    }
    if(a > b)
    {
        cout << "Takahashi" << endl;
    }
    else if(a == b)
        cout << "Draw" << endl;
    else
        cout << "Aoki" << endl;
}