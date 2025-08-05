#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> a(6);
    for(int i = 0;i < 6;i++)
    cin >> a[i];
    int n = 5;
    while(true)
    {
        if(a[n] == NULL || a[n] == '.' ||a[n] == '0')
        {
            a.pop_back();
            n--;
        }
        else
        break;
    }
    int m = a.size();
    for(int i = 0;i < n;i++)
    cout << a[i];
}