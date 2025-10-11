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

void dfs(int start, int goal, vector<vl> &G, vector<vl> &pathes, vl path, int cnt, vector<bool> check, int n)
{
    check[start] = true;
    path.emplace_back(start);
    for (int i = 0; i < n; i++)
    {
        if (check[i] == false && G[start][i] == 1)
            dfs(i, goal, G, pathes, path, cnt + 1, check, n);
        else if (G[start][i] == 1 && i == goal && path.size() % 2 == 1 && path.size() != 1)
        {
            pathes.emplace_back(path);
            return;
        }
    }
    return;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vl> G(n, vl(n, 0));
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a][b] = 1;
        G[b][a] = 1;
    }
    int ans = 0;
    while (true)
    {
        vector<vl> pathes(0);
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            int goal = i;
            vl path(0);
            vector<bool> check(n, false);
            dfs(i, goal, G, pathes, path, cnt, check, n);
        }
        if (pathes.empty())
            break;
        else
        {
            ans++;
            // 一番支障になってるやつを探す
            map<pll, ll> edge_sum;
            set<vl> ch;
            for (auto path : pathes)
            {
                vl temp = path;
                bool f = false;
                for (int i = 0; i < path.size(); i++)
                {
                    ll fir = temp[0];
                    temp.erase(temp.begin());
                    temp.emplace_back(fir);
                    if (ch.count(temp))
                        f = true;
                }
                if (f)
                    continue;
                for (int i = 0; i < path.size(); i++)
                {
                    pll temp = make_pair(min(path[i % path.size()], path[(i + 1) % path.size()]), max(path[i % path.size()], path[(i + 1) % path.size()]));
                    if (edge_sum.count(temp))
                    {
                        edge_sum[temp]++;
                    }
                    else
                    {
                        edge_sum[temp] = 1;
                    }
                }
                ch.insert(path);
                reverse(all(path));
                ch.insert(path);
            }
            ll Max = 0;
            pll max_pair = {0, 0};
            for (auto x : edge_sum)
            {
                if (Max < x.second)
                {
                    max_pair = x.first;
                    Max = x.second;
                }
            }
            G[max_pair.first][max_pair.second] = 0;
            G[max_pair.second][max_pair.first] = 0;
        }
    }
    cout << ans << endl;
}