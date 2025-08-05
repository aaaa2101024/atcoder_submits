#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<long,long>;
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
    string s;
    cin >> s;
    int n = s.size();
    // vector<bool> t(n,false);
    stack<int> last;
    rep(i,n)
    {
        if(i == n - 1)
        {
            last.push(i);
            break;
        }
        string ch = "";
        ch += s[i];
        ch += s[i + 1];
        if(ch == "[]" || ch == "()" || ch == "<>")
        {
            // t[i] = true;
            // t[i + 1] = true;
            i += 2;
            while(!last.empty() && i < n)
            {
                int x = last.top();
                string ch2 = "";
                ch2 += s[x];
                ch2 += s[i];
                if(ch2 == "[]" || ch2 == "()" || ch2 == "<>")
                {
                    // t[i] = true;
                    // t[x] = true;
                    last.pop();
                    i++;
                }
                else
                {
                    break;
                }
            }
            i--;
        }
        else
        {
            last.push(i);
        }
    }
    Yes(last.empty());
}