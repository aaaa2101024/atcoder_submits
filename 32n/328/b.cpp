#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> d(n);
    for(int i = 0;i < n;i++)
    {
        cin >> d[i];
    }
    int ans = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 1;j <= stoi(d[i]);j++)
        {
            string check = to_string(j) + to_string(i + 1);
            sort(check.begin(),check.end());
            if(check[0] == check[check.size() - 1])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}