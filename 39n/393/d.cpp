#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    string s;
    cin >> n >> s;
    vector<int> check1(0);
    for(int i = 0;i < n;i++)
    {
        if(s[i] == '1')
        {
            check1.emplace_back(i);
        }
    }
    int m = check1.size();
    int count = 0;
    for(int i = m / 2;0 <= i && i < m;i--)
    {
        ans += check1[m / 2] - check1[i] - count;
        count++;
    }
    count = 0;
    for(int i = m / 2;0 <= i && i < m;i++)
    {
        ans += check1[i] - check1[m / 2] - count;
        count++;
    }
    int temp = 0;
    count = 0;
    for(int i = m / 2 - 1;0 <= i && i < m;i--)
    {
        temp += check1[m / 2 - 1] - check1[i] - count;
        count++;
    }
    count = 0;
    for(int i = m / 2 - 1;0 <= i && i < m;i++)
    {
        temp += check1[i] - check1[m / 2 - 1] - count;
        count++;
    }
    ans = min(temp,ans);
    temp = 0;
    count = 0;
    for(int i = m / 2 + 1;0 <= i && i < m;i--)
    {
        temp += check1[m / 2 + 1] - check1[i] - count;
        count++;
    }
    count = 0;
    for(int i = m / 2 + 1;0 <= i && i < m;i++)
    {
        temp += check1[i] - check1[m / 2 + 1] - count;
        count++;
    }
    ans = min(temp,ans);
    cout << ans << endl;
}