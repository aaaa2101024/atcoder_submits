#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    int ans = 0;
    for(int i = 1;i * i <= n;i++)
    {
        int temp = 0;
        for(int j = 1;j <= sqrt(i);j++)
        {
            if(i % j == 0)
            {
                temp++;
            }
        }
        if(temp == 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
}