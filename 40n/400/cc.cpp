#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr int INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

bool IsPrime(int num)
{
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum + 1; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int keta(ll ch)
{
    int ans = 0;
    while(true)
    {
        ans++;
        ch /= 10;
        if(ch == 0)
        {
            return ans;
        }
    }
}


int main()
{
    set<ll> aaaa;
    set<ll> prime;
    rep(i,1000000000)
    {
        if(IsPrime(i) && i != 2)
        {
            prime.insert(i);
        }
    }
    prime.insert(1);
    ll n;
    cin >> n;
    ll ans = 0;
    for(int i = 1;i <= 62;i++)
    {
        ll ch = (1ll << i);
        for(ll j = 1;j < 100000;j++)
        {
            if(keta(j * j) + keta(ch) >= 20)
            {
                break;
            }
            if(j * j * ch <= n && !aaaa.count(j * j * ch))
            {
                // cout << j * j * ch << endl;
                aaaa.insert(j * j * ch);
                ans++;
            }
        }
    }
    cout << ans << endl;
}