#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string,int>> sc(n);
    long sum = 0;
    for(int i = 0;i < n;i++)
    {
        cin >> sc[i].first >> sc[i].second;
        sum += sc[i].second;
    }
    sort(sc.begin(),sc.end());
    long ans = sum % n;
    cout << sc[ans].first << endl;
}