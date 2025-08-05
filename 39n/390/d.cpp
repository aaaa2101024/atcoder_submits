#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> a(n);
    set<long> ans;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i < (1 << n);i++)
    {
        vector<long> b = a;
        int temp = -1;
        for(int j = 0;j < n;j++)
        {
            if(i & (1 << j))
            {
                if(temp == -1)
                {
                    temp = j;
                }
                else
                {
                    b[j] += b[temp];
                    b[temp] = 0;
                    temp = j;
                }
            }
        }
        long check = 0;
        for(int j = 0;j < n;j++)
        {
            check ^= b[j];
        }
        ans.insert(check);
        cout << i;
    }
    cout << ans.size() << endl;
}