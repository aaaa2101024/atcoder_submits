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

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> left, right;
    map<int, int> last;
    rep(i, n)
    {
        cin >> a[i];
        left.insert(a[i]);
        last[a[i]] = i;
    }
    int ans = left.size();
    rep(i, n)
    {
        right.insert(a[i]);
        if (last[a[i]] == i)
        {
            left.erase(a[i]);
        }
        int test = left.size() + right.size();
        ans = max(ans, test);
    }
    cout << ans << endl;
}