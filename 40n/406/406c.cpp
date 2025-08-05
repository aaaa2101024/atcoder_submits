#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr ll INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    vl a(n);
    ll mi = INFLL;
    ll ma = -1;
    rep(i,n)
    {
        cin >> a[i];
        mi = min(mi,a[i]);
        ma = max(ma,a[i]);
    }
    for(ll left = 0;left < n;)
    {
        ll test = 0;//とりあえず極大まで数える
        bool flag= false;
        while(left < n - 1 && a[left] < a[left + 1])
        {
            if(a[left] == a[left + 1])
            {
                flag = true;
                break;
            }
            test++;
            left++;
            
        }
        //ここで変数的に区切る,極小後の数を数え上げたい
        // ll left = left;
        if(test == 0 || flag || left > n)
        {
            left++;
            continue;
        }
        while(left < n - 1 && a[left] > a[left + 1])
        {
            if(a[left] == a[left + 1])
            {
                flag = true;
                left++;
                break;
            }
            left++;
        }
        //---
        if(left >= n - 1 || flag)
        {
            left++;
            continue;
        }
        if(a[left] == a[left + 1])
        {
            left++;
            continue;
        }
        //test++
        ll test2 = 0;
        ll left2 = left;
        while(left2 - 1 < n && a[left2] < a[left2 + 1])
        {
            test2++;
            left2++;
            if(a[left2] == a[left2 + 1])
            {
                break;
            }
        }
        ans += test * test2;
    }
    cout << ans << endl;
}