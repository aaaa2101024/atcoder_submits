#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<pair<int,string>> s(n);
    for(int i = 0;i < n;i++)
    {
        cin >> s[i].second;
        int m = s[i].second.size();
        s[i].first = m;
    }
    sort(s.begin(),s.end());
    for(int i = 0;i < n;i++)
    {
        cout << s[i].second;
    }
    cout << endl;
}
