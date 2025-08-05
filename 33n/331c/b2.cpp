#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,m,l;
    cin >> n >> s >> m >> l;
    int ans = 100000000;
    int x = 0,y = 0,z = 0;
    int check = 0;
    int sum = 0;
    while(x*6 >= n)
    {
        
        while(y*8 >= n)
        {
            while(sum >= n)
            {
                sum = x * 6 + y * 8 + z * 12;
                check = x * s + y * m + z * l;
                z++;
            }
            ans = min(ans,check);
            sum = 0;
            z = 0;
            y++;
        }
        y = 0;
        z = 0;
        x++;
    }
    cout << ans << endl;
}