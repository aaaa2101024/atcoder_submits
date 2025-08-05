#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<string> ans;
    string temp = "";
    for(int i = 0;i < n;i++)
    {
        temp += s[i];
        int m = temp.size();
        if(temp[0] == temp[m - 1])
        {
            ans.insert(temp);
        }
        else
        {
            temp = s[i];
            ans.insert(temp);
        }
    }
    cout << ans.size() << endl;
}