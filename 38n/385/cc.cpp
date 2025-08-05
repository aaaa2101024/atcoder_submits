#include<bits/stdc++.h>
#include<random>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    int ans = 1;
    for(int i = 0;i < n;i++)
    {
        cin >> h[i];
    }
    for(int i = 0;i < n;i++)
    {
        for(int j = 1;j < n;j++)
        {
            int temp = 1;
            for(int k = 1;i + j * k < n;k++)
            {
                if(h[i] == h[i + j * k])
                {
                    temp++;
                }
                else
                {
                    break;
                }
            }
            ans = max(ans,temp);
        }
    }
    cout << ans << endl;
}