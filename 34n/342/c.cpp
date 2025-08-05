#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<char,string> check;
    string s;
    cin >> s;
    for(int i = 0;i < 26;i++)
    {
        check[char('a' + i)] = char('a' + i);
    }
    int q;
    cin >> q;
    for(int i = 0;i < q;i++)
    {
        char x,y;
        cin >> x >> y;
        for(int j = 0;j < 26;j++)
        {
            if(check[char('a' + j)][check[char('a' + j)].size() - 1] == x)
            {
                check[char('a' + j)] += y;
            }
        }
    }
    for(int i = 0;i < n;i++)
    {
        cout << check[s[i]][check[s[i]].size() - 1];
    }
    cout << endl;

}