#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (n % 2 == 0)
    {
        cout << "No" << endl;
        return 0;
    }
    int mid = n / 2;
    string t = "";
    for(int i = 0;i < mid;i++)
    {
        t += '1';
    }
    t += '/';
    for(int i = 0;i < mid;i++)
    {
        t += '2';
    }
    if(t == s)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}