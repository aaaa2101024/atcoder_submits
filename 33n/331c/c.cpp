#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    vector<int> b(n);
    for(int i = 0;i < n;i++) b[i] = a[i];
    sort(b.begin(),b.end());
    vector<vector<int>> c(0,vector<int>(0));
    long sum = 0;
    int count = 0;
    for(int i = 0,j = 0;i < n-1;i++,count++)
    {
        
        if(b[i] != b[i+1])
        {
            c.at(j).push_back(b[i]);
            sum += count * b[i];
            count = 0;
            c.at(j).push_back(sum);
            j++;
        }
    }
    for(int i = 0;i < n;i++)
    {
        long ans = 0;
        cout << ans << endl;
    }
}