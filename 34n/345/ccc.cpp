#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> x;
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            string t = s;
            swap(t[i],t[j]);
            x.insert(t);
        }
    }
    cout << x.size();
}