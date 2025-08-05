#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "wbwbwwbwbwbwwbwbwwbwbwbw";
    set<string> x;
    int n = s.size();
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            string t = s.substr(i,j);
            x.insert(t);
        }
    }
    x.insert("");
    int w,b;
    cin >> w >> b;
    while(w - 7 >= 0 && b - 5 >= 0)
    {
        w -= 7;
        b -= 5;
    }
    string check = "";
    for(int i = 0;i < b;i++)
    {
        check += 'b';
    }
    for(int i = 0;i < w;i++)
    {
        check += 'w';
    }
    for(auto y:x)
    {
        sort(y.begin(),y.end());
        if(y == check)
        {
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" << endl;
}