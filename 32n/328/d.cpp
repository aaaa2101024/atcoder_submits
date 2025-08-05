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
    string s;
    cin >> s;
    int n = s.size();
    vector<bool> ch(n, true);
    stack<char> left;
    stack<int> num;
    deque<char> left_2;
    string ABC = "ABC";
    rep(i, n - 2)
    {
        if (s.substr(i, 3) == ABC)
        {
            ch[i] = false;
            ch[i + 1] = false;
            ch[i + 2] = false;
            i += 3;
            while (!(left_2.empty()) && i < n)
            {
                if (left_2.size() == 2)
                {
                    string test = "";
                    test += left_2[0];
                    test += left_2[1];
                    test += s[i];
                    if (test == ABC)
                    {
                        int x = num.top();
                        ch[x] = false;
                        num.pop();
                        x = num.top();
                        ch[x] = false;
                        num.pop();
                        ch[i] = false;
                        i++;
                        left_2.pop_front();
                        left_2.pop_front();
                        while (left_2.size() != 2 && !left.empty())
                        {
                            char c = left.top();
                            left.pop();
                            left_2.push_front(c);
                        }
                        continue;
                    }
                }
                if (i < n - 1)
                {
                    string test = "";
                    test += left_2.back();
                    test += s[i];
                    test += s[i + 1];
                    if (test == ABC)
                    {
                        int x = num.top();
                        ch[x] = false;
                        num.pop();
                        ch[i + 1] = false;
                        ch[i] = false;
                        i += 2;
                        left_2.pop_back();
                        if (left.size() > 0)
                        {
                            char c = left.top();
                            left.pop();
                            left_2.push_front(c);
                        }
                        continue;
                    }
                }
                break;
            }
            i--;
        }
        else
        {
            left_2.push_back(s[i]);
            num.push(i);
            if (left_2.size() == 3)
            {
                char c = left_2.front();
                left_2.pop_front();
                left.push(c);
            }
        }
    }
    rep(i, n)
    {
        if (ch[i])
        {
            cout << s[i];
        }
    }
    cout << endl;
}