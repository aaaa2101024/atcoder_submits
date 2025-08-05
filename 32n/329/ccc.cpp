#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long, long>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; i++)
constexpr ll INFLL = (1ll << 62);
constexpr int INF = (1 << 30);
#define Yes(x)                 \
    if (x)                     \
        cout << "Yes" << endl; \
    else                       \
        cout << "No" << endl;


int main()
{
    int n;
    string s;
    cin >> n >> s;
    map<char,int> ans;
    rep(i,26)
    {
        ans['a' + i] = 0;
    }
    rep(i,n)
    {
        char save = s[i];
        int count = 1;
        while(i + count < n && s[i + count] == save)
        {
            count++;
        }
        ans[save] = max(ans[save],count);
        i += count - 1;
    }
    int sum = 0;
    rep(i,26)
    {
        sum += ans['a' + i];
    }
    cout << sum << endl;
}