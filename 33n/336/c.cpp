#include<bits/stdc++.h>
using namespace std;


long long base_10_to_n(long long k,int n)
{
    long long ans = 0;
    long long count = 1;
    for(int i = 0;k != 0;i++)
    {
        ans += (k%n) * count;
        count *= 10;
        k /= n;
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    n--;
    long long ans = base_10_to_n(n,5);
    cout << ans * 2 << endl;
}