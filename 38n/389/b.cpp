#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    int ans = 1;
    for(;true;ans++)
    {
        n /= ans;
        if(n == 1)
        {
            cout << ans << endl;
            return 0;
        }
    }   
}